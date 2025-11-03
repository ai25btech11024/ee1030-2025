import ctypes

# Load the shared library
lib = ctypes.CDLL('./libarea.so')

# Define argument and return types
ArrayType = ctypes.c_double * 2
lib.area.argtypes = [ArrayType, ArrayType]
lib.area.restype = ctypes.c_double

# Example inputs
c = ArrayType(1.0, 2.0)  # coordinates of center
p = ArrayType(4.0, 6.0)  # coordinates of point on circle

# Call the function
area_value = lib.area(c, p)

print("Area of the circle:", area_value)

