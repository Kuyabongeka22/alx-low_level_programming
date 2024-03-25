import ctypes
import pathlib

if __name__ == "__main__":
    libname = pathlib.Path().absolute() / "100-operations.so"
    c_lib = ctypes.CDLL(libname)
