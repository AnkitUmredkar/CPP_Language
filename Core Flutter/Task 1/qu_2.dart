// Write a Dart program to perform addition of two
// different numbers.

import 'dart:io';

void main()
{
    print("Enter any Number : ");  
    int a = int.parse(stdin.readLineSync()!);
    int b = int.parse(stdin.readLineSync()!);

    int sum = a + b;
    print("The sum is : $sum");
    
}