all : croq gps simu

croq :
	touch Miam.txt
gps :
	touch GPS.txt

simu : 
	gcc Source/chat_1.c -o chat_1.out
	gcc Source/chat_2.c -o chat_2.out
	
clean :
	rm *.txt
	rm *.out
	
