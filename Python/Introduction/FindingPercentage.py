# Program Name : Finding the percentage
# Link         : https://www.hackerrank.com/challenges/finding-the-percentage
# Author Name  : Sayantan Pandit
# Date         : 14-05-2016

n = int(raw_input())
mydict = {}
for line in range(n):
    info = raw_input().split(" ")
    score = map(float, info[1:])
    mydict[info[0]] = sum(score) / float(len(score))

print "%.2f" % round(mydict[raw_input()],2)
