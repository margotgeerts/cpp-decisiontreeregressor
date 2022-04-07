# ctypes_test.py
import ctypes
import pathlib

def cpp_regression_tree(trainPath, testPath):
    # Load the shared library into ctypes
    libname = pathlib.Path().absolute() / "build/libDecisionTree.dylib"

    c_lib = ctypes.CDLL(libname)
    regressionTree = c_lib.regressionTree
    regressionTree.restype = ctypes.POINTER(ctypes.c_int)
    regressionTree.argtypes = [ctypes.c_char_p, ctypes.c_char_p]


    with open(testPath) as f:
        first_line = f.readline()
    number_predictions = first_line.count(',') + 1
    
    regressionTreeP = regressionTree(trainPath.encode('utf-8'), testPath.encode('utf-8'))

    predictions = [regressionTreeP[i] for i in range(number_predictions)]
    return predictions

if __name__ == "__main__":
    # running lazy tests
    trainPath = "test/resources/train.csv"
    testPath = "test/resources/test.csv"
    predictions = cpp_regression_tree(trainPath, testPath)
    print(predictions)

    
