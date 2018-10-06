#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Jan 24 18:14:56 2018

@author: semakuru
"""

import numpy as np
import pylab as pl
from mpl_toolkits.mplot3d import Axes3D 
np.set_printoptions(threshold=np.inf)
x = np.arange(0,10,0.5)
y = np.arange(-10,10,1)
z = np.arange(-10,10,1)
coordinates = np.zeros([4,8001])

ax = Axes3D(pl.gcf())
X=[]
Y=[]
Z=[]
i=0
for a in x:
    for b in y:
        for c in z:
            i=i+1
            coordinates[0,i] = a
            coordinates[1,i] = b
            coordinates[2,i] = c
            coordinates[3,i] = np.sqrt((a)**2+(b)**2+(c)**2)

ax.scatter(coordinates[0],coordinates[1],coordinates[2],s=((np.abs(coordinates[0])/(coordinates[3])))*10,c='b')
pl.xlabel("x")
pl.ylabel("y")
pl.savefig("spherical harmonic 1,+-1.png")