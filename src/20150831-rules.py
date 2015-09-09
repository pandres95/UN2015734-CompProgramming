from __future__ import print_function

iif = lambda p, q: not(p and (not q)) and not(q and (not p))

f1 = lambda p, q, r, s: iif((p or (not q)), (r and s))
f2 = lambda p, q, r, s: not((not(r and (not q))) and (not (q == s)))

def drawTable(table):
    for row in table:
        for col in row:
            print(col, end='\t')
        print()

table1 = []
table1.append([ 'p', 'q', 'r', 's', 'f1', 'f2' ])

for p in [False, True]:
    for q in [False, True]:
        for r in [False, True]:
            for s in [False, True]:
                resTable = []
                resTable.append(1 if p else 0)
                resTable.append(1 if q else 0)
                resTable.append(1 if r else 0)
                resTable.append(1 if s else 0)
                resTable.append(f1(p, q, r, s))
                resTable.append(f2(p, q, r, s))
                table1.append(resTable)

drawTable(table1)
