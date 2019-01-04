# This program will update the parameters of my belief function.

def update(mean1, var1, mean2, var2):
    new_mean = ((var1*mean2)+(var2*mean1))/(var1+var2)
    new_var = var1*var2/(var1+var2)
    return [new_mean, new_var]

print update(10.,8.,13., 2.)
