from __future__ import print_function

def f1(p, q, r):
    return (p or q) == (q or p)


def f2(p, q, r):
    return (p or (not q)) and (q if p else False)


def f3(p, q, r):
    return p and (q or r)

def drawTable(table):
    for row in table:
        for col in row:
            print(col, end='\t')
        print()


table = []
table.append([ 'p', 'q', 'r', 'f1', 'f2', 'f3' ])

for p in range(0, 2):
    for q in range(0, 2):
        for r in range(0, 2):
            resTable = []
            resTable.append(p)
            resTable.append(q)
            resTable.append(r)
            resTable.append(f1(p, q, r))
            resTable.append(f2(p, q, r))
            resTable.append(f3(p, q, r))
            table.append(resTable)


drawTable(table)
