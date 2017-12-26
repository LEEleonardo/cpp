#include "stdafx.h"
#include "CPair.h"
template <class T>
CPair<T>::CPair(T ma) : m1(ma)
{

}
template <class T>
T CPair<T>::Getm1() const
{
	return m1;
}
template <class T>
void CPair<T>::Setm1(T ma)
{
	m1 = ma;
}

