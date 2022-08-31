/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeem <haeem@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:37:20 by haeem             #+#    #+#             */
/*   Updated: 2022/08/29 20:42:25 by haeem            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>
#include "./ex00/ft_ft.c"
#include "./ex01/ft_ultimate_ft.c"
#include "./ex02/ft_swap.c"
#include "./ex03/ft_div_mod.c"
#include "./ex04/ft_ultimate_div_mod.c"
#include "./ex05/ft_putstr.c"
#include "./ex06/ft_strlen.c"
#include "./ex07/ft_rev_int_tab.c"
#include "./ex08/ft_sort_int_tab.c"
#define fl fflush(stdout)
using namespace std;
int main(void)
{	

	// 포인터와 주솟값, 자주 헷갈리는 개념이지만 지금 정리해 두면 메모리 관리에 효과적인 도구가 될 수 있어요
	cout<<"°º¤ø,,ø¤º°`°º¤ø, ex 00 ,ø¤°º¤ø,,ø¤º°`°º¤ø,\n\n"<<endl;
	int a = 0;
	ft_ft(&a);
	cout<<"──────────answer──────────"<<endl;
	cout << "'42'"<<endl;
	cout << "────────────────────────────────────────────────"<<endl;
	cout << "'"; fl;cout<<a;cout<<"'"<<endl;
	cout<<"──────────output──────────\n\n"<<endl;
	

	// 이건 여기서 써보지 않으면 다신 못 쓸듯...
	cout<<"\n\n°º¤ø,,ø¤º°`°º¤ø, ex 01 ,ø¤°º¤ø,,ø¤º°`°º¤ø,\n\n"<<endl;
	int n = 0;
	int *n_p1 = &n;
	int **n_p2 = &n_p1;
	int ***n_p3 = &n_p2;
	int ****n_p4 = &n_p3;
	int *****n_p5 = &n_p4;
	int ******n_p6 = &n_p5;
	int *******n_p7 = &n_p6;
	int ********n_p8 = &n_p7;
	int *********n_p9 = &n_p8;
	ft_ultimate_ft(n_p9);
	
	cout<<"──────────answer──────────"<<endl;
	cout << "'42'"<<endl;
	cout << "────────────────────────────────────────────────"<<endl;
	cout << "'"; fl;cout<<n;cout<<"'"<<endl;
	cout<<"──────────output──────────\n\n"<<endl;



	// 포인터와 변수를 응용헤 봅시다!
	a = 2; int b = 5;
	ft_swap(&a,&b);
	cout<<"\n\n°º¤ø,,ø¤º°`°º¤ø, ex 02 ,ø¤°º¤ø,,ø¤º°`°º¤ø,\n\n"<<endl;
	cout<<"──────────answer──────────"<<endl;
	cout << "'5 2'"<<endl;
	cout << "────────────────────────────────────────────────"<<endl;
	cout << "'"; fl;cout<<a<<" "<<b;cout<<"'"<<endl;
	cout<<"──────────output──────────\n\n"<<endl;



	// 포인터와 변수 2
	int div, mod;
	ft_div_mod(10, 7, &div, &mod);
	cout<<"\n\n°º¤ø,,ø¤º°`°º¤ø, ex 03 ,ø¤°º¤ø,,ø¤º°`°º¤ø,\n\n"<<endl;
	cout<<"──────────answer──────────"<<endl;
	cout << "'1 3'"<<endl;
	cout << "────────────────────────────────────────────────"<<endl;
	cout << "'"; fl;cout<<div<<" "<<mod;cout<<"'"<<endl;
	cout<<"──────────output──────────\n\n"<<endl;



	// 포인터와 변수 3
	a = 10; 
	b = 7;
	ft_ultimate_div_mod(&a,&b);
	cout<<"\n\n°º¤ø,,ø¤º°`°º¤ø, ex 04 ,ø¤°º¤ø,,ø¤º°`°º¤ø,\n\n"<<endl;
	cout<<"──────────answer──────────"<<endl;
	cout << "'1 3'"<<endl;
	cout << "────────────────────────────────────────────────"<<endl;
	cout << "'"; fl;cout<<a<<" "<<b;cout<<"'"<<endl;
	cout<<"──────────output──────────\n\n"<<endl;



	// 	문자열의 기초인 널 문자에 대해 알아봅시다!
	char cat[100] = "나도 고양이 키우고 싶다 나만 고양이 없어";
	cout<<"\n\n°º¤ø,,ø¤º°`°º¤ø, ex 05 ,ø¤°º¤ø,,ø¤º°`°º¤ø,\n\n"<<endl;
	cout<<"──────────answer──────────"<<endl;
	cout << "'나도 고양이 키우고 싶다 나만 고양이 없어'"<<endl;
	cout << "────────────────────────────────────────────────"<<endl;
	cout << "'"; fl;ft_putstr(cat);cout<<"'"<<endl;
	cout<<"──────────output──────────\n\n"<<endl;
	

	// C style 문자열 처리의 기본!
	cout<<"\n\n°º¤ø,,ø¤º°`°º¤ø, ex 06 ,ø¤°º¤ø,,ø¤º°`°º¤ø,\n\n"<<endl;
	cout<<"──────────answer──────────"<<endl;
	cout << "'";cout<<strlen(cat); cout<<"'"<<endl;
	cout << "────────────────────────────────────────────────"<<endl;
	cout << "'"; fl;cout<<ft_strlen(cat);cout<<"'"<<endl;
	cout<<"──────────output──────────\n\n"<<endl;


	// 본격적인 알고리즘 만들기! size가 홀수일때와 짝수일 때 둘 다 고려해야 합니다!
	int num[10] = {0,1,2,3,4,5,6,7,8,9};
	int num2[9] = {0,1,2,3,4,5,6,7,8};
	ft_rev_int_tab(num,10);
	ft_rev_int_tab(num2,9);
	cout<<"\n\n°º¤ø,,ø¤º°`°º¤ø, ex 07 ,ø¤°º¤ø,,ø¤º°`°º¤ø,\n\n"<<endl;
	cout<<"──────────answer──────────"<<endl;
	cout << "'9 8 7 6 5 4 3 2 1 0'"<<endl;
	cout << "────────────────────────────────────────────────"<<endl;
	cout << "'"; fl;for(int i=0; i<10; i++)if(i!=9)cout<<num[i]<<" ";else cout<<num[i];cout<<"'"<<endl;
	cout<<"──────────output──────────\n\n"<<endl;
	cout<<"──────────answer──────────"<<endl;
	cout << "'8 7 6 5 4 3 2 1 0'"<<endl;
	cout << "────────────────────────────────────────────────"<<endl;
	cout << "'"; fl;for(int i=0; i<9; i++)if(i!=8)cout<<num2[i]<<" ";else cout<<num2[i];cout<<"'"<<endl;
	cout<<"──────────output──────────\n\n"<<endl;
	

	// 본격적인 알고리즘 만들기 2! 다른 정렬보다 느리지만 구현이 쉬운 버블 정렬에 대해 알아봅시다!
	int num3[10] = {9,8,7,6,5,4,3,2,1,0};
	int num4[11] = {7, 4, 5, 3, 1, 2,6,9,8,0,-1};
	ft_sort_int_tab(num3, 10);
	ft_sort_int_tab(num4, 11);
	cout<<"\n\n°º¤ø,,ø¤º°`°º¤ø, ex 08 ,ø¤°º¤ø,,ø¤º°`°º¤ø,\n\n"<<endl;
	cout<<"──────────answer──────────"<<endl;
	cout << "'0 1 2 3 4 5 6 7 8 9'"<<endl;
	cout << "────────────────────────────────────────────────"<<endl;
	cout << "'"; fl;for(int i=0; i<10; i++)if(i!=9)cout<<num3[i]<<" ";else cout<<num3[i];cout<<"'"<<endl;
	cout<<"──────────output──────────\n\n"<<endl;
	cout<<"──────────answer──────────"<<endl;
	cout << "'-1 0 1 2 3 4 5 6 7 8 9'"<<endl;
	cout << "────────────────────────────────────────────────"<<endl;
	cout << "'"; fl;for(int i=0; i<11; i++)if(i!=10)cout<<num4[i]<<" ";else cout<<num4[i];cout<<"'"<<endl;
	cout<<"──────────output──────────\n\n"<<endl;
	
}
