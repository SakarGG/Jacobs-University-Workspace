#\
CH-230-A\
a7 p7.3[c]\
Sakar Gopal Gurubacharya\
s.gurubacharya@jacobs-university.de\
#


#Makefile from Lecture 7. 
CC = gcc
CFLAGS = -Wall

#Creating object files.
OBJ = linked_list.o use_linked_list.o

#Executable.
all: use_linked_list

#Runs the executable.
use_linked_list: $(OBJ)
				 $(CC) $(CFLAGS) -o use_linked_list $(OBJ)

#Inside the object file
use_linked_list.o: linked_list.h use_linked_list.c

#Inside the object file
linked_list.o: linked_list.h linked_list.c

#Delete all the object files that were created.
clean:
	   rm -f use_linked_list *.o