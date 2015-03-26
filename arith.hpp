#ifndef __MYUN2__CORE__ARITH__HPP__
#define __MYUN2__CORE__ARITH__HPP__

template <typename T> const T& add(const T& a, const T& b) { return a + b; }
template <typename T> const T& sub(const T& a, const T& b) { return a - b; }
template <typename T> const T& remainder(const T& a, const T& b) { return a % b; }
template <typename T> const T& multiple(const T& a, const T& b) { return a * b; }
template <typename T> const T& divide(const T& a, const T& b) { return a / b; }

#endif//__MYUN2__CORE__ARITH__HPP__
