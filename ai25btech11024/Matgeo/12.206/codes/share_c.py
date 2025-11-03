import ctypes
import numpy as np

# Load the shared library
lib = ctypes.CDLL('./libeigen.so')

# Define argument types for the function
lib.eigen_vector.argtypes = [((ctypes.c_float * 2) * 2)]
lib.eigen_vector.restype = None  # since it returns void

# Example 2x2 matrix
mat = np.array([[1.0, 2.0],
                [0.0, 2.0]], dtype=np.float32)

# Convert numpy array to C array
c_mat = ((ctypes.c_float * 2) * 2)(
    (ctypes.c_float(mat[0][0]), ctypes.c_float(mat[0][1])),
    (ctypes.c_float(mat[1][0]), ctypes.c_float(mat[1][1]))
)

# Call the function
lib.eigen_vector(c_mat)

