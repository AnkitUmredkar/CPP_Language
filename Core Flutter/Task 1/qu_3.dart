// Write a Dart program to perform multiplication of
// two user given numbers.

import 'dart:io';

void main()
{
    print("Enter any Number : ");
    int n = int.parse(stdin.readLineSync()!);

    for(int i=1; i<=10; i++)
    {
      int mult = i*n;
      print("$n * $i = $mult");
    }
}