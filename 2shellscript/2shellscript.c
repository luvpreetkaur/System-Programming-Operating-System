// Experiment No. 2
// Aim: Write a shell scripting on UNIX/LINUX.
// Name:Luvpreet Kaur
// Roll No.: 304338


#!/bin/sh
echo " Enter two numbers"
read n1
read n2

echo "Please,enter your choice"
echo "
      1.addition
      2.subtraction
      3.multiplication
      4.division 
      5.exit"

while true
do
echo "choice is"
read x
case $x in
1)x=$((n1+n2));;
2)x=$((n1-n2));;
3)x=$((n1*n2));;
4)x=$((n1/n2));;
5)exit;;
esac
echo "ANSEWER is $x"
done

/*
OUTPUT : 
Enter two numbers
4
2
Please,enter your choice

      1.addition
      2.subtraction
      3.multiplication
      4.division 
      5.exit
choice is
1
ANSEWER is 6
choice is
2
ANSEWER is 2
choice is
3
ANSEWER is 8
choice is
4
ANSEWER is 2
choice is
5
*/
