This is my readme:

Creator: Reilly Cannon


gridpi(10 points) = 3.52

gridpi(100 points) = 3.1812

gridpi(1000 points) = 3.14554

gridpi(10000 points) = 3.14199


The asymptotic runtime of my function is O(N^2), where N denotes the number of points given as input by the user. This is becasue gridpi uses two nested while loops that both run from 0 to N-1, and a constant amount of work is done upon each iteration: an arithmatic calculation, a comparison, and a (possible) incrimentation.

Actual Runtime with N = 10: 0.359s

Actual Runtime with N = 100: 0.772s

Actual Runtime with N = 1000: 1.001s

Actual Runtime wiht N = 10000: 1.931s

To see if they match the expected asymptotic runtime, we need to check that, for each of the chosen number of points, the acutal runtime is proportional by a constant c to the square of the number of points and that that c is the same for each number of points. However, we know immediately that the actual run times will most likely not match expectation because the terminal command "time" includes the time that the user uses to input the number of points in its measurement. This adds only a (roughly) constant factor to the asymptotic run time, but it basically guarentees that the actual run times won't be proportional, especially since the value of N is much too low for the asymptotic behavior to "kick in". 

c1 = 0.359/10^2 = 0.00359

c2 = 0.772/100^2 = 0.0000772

c3 = 1.001/1000^2 = 0.000001001

c4 = 1.931/10000^2 = 0.000000002


const_pi ---------------------------------------------------------------

N = 10: pi = 3.52, run time = 0.318s

N = 100: pi = 3.1812, run time = 0.642s

N = 1000: pi = 3.14554, run time = 0.834s

Both the value of pi and the actual run time have remained roughly the same, although the run times have decreased marginally (probably because I go faster at pressing the input keys; I have to admit that I kinda cherry-picked the ones where I was quick). The compilation process was smooth and fast; I got it on the first try :) Other than that I didn't notice anything in particular.  
