#include <stdio.h>

int gcd ( int a, int b )
{
	if ( a < b ) return gcd ( b, a );
	
	if ( b == 0 )
		return a;
	else
		return gcd ( b, a % b );
}
int value ( int type, int width, int height, int length )
{
	int u_val;

	switch ( type ) {
		case 79:
			u_val = 30;
			break;
		case 47:
			u_val = 10;
			break;
		case 29:
			u_val = 4;
			break;
		case 82:
			u_val = 5;
			break;
		case 26:
			u_val = 3;
			break;
		case 22:
			u_val = 9;
			break;
		default:
			return -1;
	}

	if ( width <= 0 || height <= 0 || length <= 0 )
		return -2;
	
	int s = gcd ( gcd ( width, height ), gcd ( height, length ) );
	int v = s * s * s;
	int count = ( width / s ) * ( height / s ) * ( length / s );
	
	return v * v * count * u_val;
}