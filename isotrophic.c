#include<stdio.h>
#include<string.h>
_author__ = 'raguram'
s1=input("Enter the String 1 : ")
s2=input("Enter the String 2 : ")
if(len(s1)==len(s2)):
    d1=[]
    d2=[]
    def dups(s):
        d=[]
        r=[]
        for i in s:
            #print(i)
            if i not in d:
                d.append(i)
            else:
                if i not in r:
                    r.append(i)
                    #print(r)
        return r
    r1=dups(s1)
    r2=dups(s2)

    if len(r1)==len(r2):
        def rep(r1,s1):
            p=[]
            for i in r1:
                ip=[]
                count=-1
                for j in s1:
                    count=count+1
                    if i==j:
                        ip.append(count)
                        #print(p)
                p.append(ip)
                return p
        p1=rep(r1,s1)
        p2=rep(r2,s2)

        if(p1==p2):
            print('True')
        else:
            print('False')
    else:
        print('False')
else:
    print('False')


