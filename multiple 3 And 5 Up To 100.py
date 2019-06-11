import numpy as np
y = np.arange(1, 100)
n= y[(y % 3 == 0) | (y % 5 == 0)]
print(n[:1000])

