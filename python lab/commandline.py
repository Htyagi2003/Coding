import sys
print(sys.version_info)
print(sys.version)
sys.argv="1 2 3 4 5 6".split()
print("These are the arguements passed",sys.argv[0],sys.argv[1],sys.argv[2],sys.argv[3],sys.argv[4],sys.argv[5],)
print("Total Number of Arguements",len(sys.argv))

import ch as p
print(p)