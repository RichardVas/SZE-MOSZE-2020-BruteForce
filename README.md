# SZE-MOSZE-2020-BruteForce

A BruteForce csapatként egy RPG játék megvalósításán dolgozunk. Jelenlegi állapotunkban rendelkezünk a Fighter.h könyvtárral, ami tartlamzza a harcosok egyes tulajdonságait, illetve kezdetleges interakciót más harcosokkal. Source.cpp tartalmazza az első összecsapást kettő harcos között a duel függvény keretében.

Task#2 keretében bővítettük programunkat a parseUnit metódussal, mely képes Json fájlokat feldolgozni. A feldolgozás után a workflownk és a test.sh keretein belűl összehasonlítjuk a tényleges kimenetet a várt értékkel.

Task#3 keretében a feladatunkat kibővítettük egy új osztállyal. A Jsonparser egy "univerzális" json fájl olvasó osztály, mely lényegesen rugalmasabb előddjéhez mérve. Képes ignorálni a fölösleges whitespaceket és nem tartja magát az inputokot sorrendjéhez.
