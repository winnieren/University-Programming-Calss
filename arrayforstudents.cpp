#include <iostream>
#include <iomanip>
#include <cstdlib>
// SD121ers - you might have to remove the relative path of
//   the following ie. change to:
#include "array.h"
//#include "../array/array.h"

Array::Array( const int arraySize )
{
   size = ( arraySize > 0 ? arraySize : 10 ); 
   ptr = new int[ size ];
   if ( ptr == NULL )
   {
	   cout << "Out of memory" << endl;
	   exit(1);
   }

   for ( int i = 0; i < size; i++ )
      ptr[ i ] = 0;
}

//copy constructor??? 
Array::Array( const Array &init ) //: size( init.size ) 
{
	// provide function body
	ptr = new int[size];
	for ( int i = 0; i < size ; i++)
	{	
		ptr [i] = init [i];
	}
	
	
}

Array::~Array()
{
delete [] ptr;
}

int Array::get_size() const 
{ 
	return size; 
}

void Array::operator=( const Array &right )
{
	int new_length = right.size; 
	if (new_length > size){
		delete [] ptr;
		size = new_length;
		ptr = new int[size+1];
	}
	for (int i=0; i< new_length; i++){
			ptr[i]= right[i];
	}
	
	ptr[size]='\0';


	return;
}

istream &operator>>( istream &input, Array &a )
{
   for ( int i = 0; i < a.size; i++ )
      input >> a.ptr[ i ];

   return input;
}

ostream &operator<<( ostream &output, const Array &a )
{
   int i;

   for ( i = 0; i < a.size; i++ ) 
   {
      output << setw( 12 ) << a.ptr[ i ];

      if ( ( i + 1 ) % 4 == 0 ) // 4 numbers per row of output
         output << endl;
   }

   if ( i % 4 != 0 )
      output << endl;

   return output;
}

bool Array::operator==( const Array &right ) const
{
   // check arrays of different sizes
   if ( size != right.size )
      return false;    

   // check contents of arrays
   for ( int i = 0; i < size; i++ )
      if ( ptr[ i ] != right.ptr[ i ] )
         return false;

   // otherwise, arrays are equal
   return true;        
}

int &Array::operator[]( const int subscript )
{
	if ( subscript < 0 || subscript >= size )
	{
		cout << "Outside array dimensions.  Exitting"
			<< endl;
		exit(1);
	}

   return ptr[ subscript ];
}

const int &Array::operator[]( const int subscript ) const
{
	if ( subscript < 0 || subscript >= size )
	{
		cout << "Outside array dimensions.  Exitting"
			<< endl;
		exit(1);
	}

   return ptr[ subscript ];
}

