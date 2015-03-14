#!/usr/bin/env python3

import sys

def main():
    
    if len(sys.argv) < 2:
        print("Usage: %s <iterations>" % sys.argv[0])
        sys.exit(1)
    
    sum = 0.0
    
    print("Doing %d iterations." % int(sys.argv[1]))
    
    for i in range(0, int(sys.argv[1])):
        sum = sum + 2.0/((4*i+1)*(4*i+3))
    
    print("The calculated value of pi is: %.20Lf" % (4.0*sum))
    sys.exit(0)

main()
