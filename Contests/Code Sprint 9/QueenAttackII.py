n, o = input().split()
qr,qc = input().split()
n = int(n)
o = int(o)
qr,qc = int(qr), int(qc)

board = [0]*n*n

for i in range(o):
	r,c = input().split()
	r,c = int(r), int(c)

	board[(r-1)*n + c-1] = 1


squares = 0;

edgeFind = qc-1;
while (edgeFind >= 0 and board[(qr-1)*n + edgeFind] == 0):
	edgeFind-= 1;
	squares+= 1;



edgeFind = qc-1;
while (edgeFind < n and board[(qr-1)*n + edgeFind] == 0):
	edgeFind+= 1;
	squares+= 1;


edgeFind = qr-1;
while (edgeFind >= 0 and board[(edgeFind)*n + qc-1] == 0):
	edgeFind-= 1;
	squares+= 1;



edgeFind = qr-1;
while (edgeFind < n and board[(edgeFind)*n+qc-1] == 0):
	edgeFind+= 1;
	squares+= 1;


efc = qc-1;
efr = qr-1;
while (efc < n and efr < n and board[efr*n+efc] == 0):
	efc+= 1; 
	efr+= 1;
	squares+= 1;

efc = qc-1;
efr = qr-1;
while (efc < n and efr >= 0 and board[efr*n+efc] == 0):
	efc+= 1; 
	efr-= 1;
	squares+= 1;


efc = qc-1;
efr = qr-1;
while (efc >= 0 and efr < n and board[efr*n+efc] == 0):
	efc-= 1; 
	efr+= 1;
	squares+= 1;


efc = qc-1;
efr = qr-1;
while (efc >= 0 and efr >= 0 and board[efr*n+efc] == 0):
	efc-= 1; 
	efr-= 1;
	squares+= 1;

print(squares-8)

