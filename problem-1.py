# -*- coding: utf-8 -*-
"""
Created on Tue Nov 20 09:42:37 2018

@author: Adri Jovin
"""
limit=input("Enter the limit:")
sum=0
for i in range(int(limit)):
    if i%3==0 or i%5==0:
        sum=sum+i
print(sum)