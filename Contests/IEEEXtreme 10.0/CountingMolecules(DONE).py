
atoms=[int(x) for x in input().split()]; #c h  o
c=atoms[0]; h=atoms[1]; p=atoms[2];

#print(atoms)

N_h20=(h/4+p/2-c);
N_co2=(p/2-h/4);
N_glu=(h/24+c/6-p/12);

if(N_h20<0 or N_co2<0 or N_glu<0):
    print("Error")
elif(N_h20==0 and N_co2==0 and N_glu==0):
    print("Error")
else:
	N_h20 = round(N_h20)
	N_co2 = round(N_co2)
	N_glu = round(N_glu)

	C = N_co2 + 6*N_glu;
	H = 2*N_h20 + 12*N_glu
	O = N_h20 + 2*N_co2 + 6*N_glu

	if (c == C and H == h and p == O):
		print(N_h20, N_co2, N_glu)
	else:
		print("Error")
