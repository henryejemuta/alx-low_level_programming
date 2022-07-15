#include <stdio.h>



/*
 * Apply the constructor attribute to preMainFun() so that it
 * is executed before main()
 */
void preMainFun(void) __attribute__ ((constructor));

/**
 * preMainFun - A C function that prints the below text before main
 * main function is runned
 * "You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
 **/
void preMainFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
