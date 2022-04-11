template<bool B, typename T = void> struct enable_if;
template<typename T>
struct enable_if<true, T> { typedef T type; };
template<typename T>
struct enable_if<false,T>{};


template<int N, typename T>//обьявили такой шаблон чтобы его было видно из други шаблонов
typename enable_if<(N > 0) && (N % 2 == 0), T>::type pow(T x);

template<int N,typename T>
typename enable_if<(N<0),T>::type
pow(T x) { return 1 / pow<-N>(x); }

template<int N,typename T>
typename enable_if<(N==0),T>::type
pow(T x) { return 1; }


template<int N, typename T>
typename enable_if<((N > 0) && (N % 2 == 1)), T>::type
pow(T x) { return pow<N - 1>(x) * x; }

template<int N,typename T>
typename enable_if<(N>0)&&(N%2==0),T>::type
pow(T x) { T  p = pow<N / 2>(x); return p * p; }
