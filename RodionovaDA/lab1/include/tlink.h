#ifndef TLINK_H
#define TLINK_H

template <typename TData>
class TLink 
{
public: 
	TData Data;
	TLink<TData>* Next;
};

#endif