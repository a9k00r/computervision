# computervision
1. Give a 2D array of size nxm, which is an input image 
2. Give a kernal of size pxq 

apply max pooling for dimenssion reduction i.e. convolve kernal matrix over input image.

output image size:  L x M x C

    formula used: 
     L = M math.ceil((n-k+1/2) +1)
     C = number of chanels (R,G,B)

