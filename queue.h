#ifndef QUEUE_H
#define QUEUE_H

#include <stack>

// This code brought to you by 10yo Talisker

template <class T>
class ts_queue
{
	private:
		std::stack<T> in;
		std::stack<T> out;
		void turnover();
		void turn_back_over();
	public:
		void push(T);
		void pop();
		int size();
		T front();
		T back();
		bool empty() const;
};

template <class T>
void ts_queue<T>::turnover()
{
	// sample implementation
	while (!in.empty()) {
		out.push(in.top());
		in.pop();
	}
}

template <class T>
void ts_queue<T>::turn_back_over()
{
	// sample implementation
	while (!out.empty()) {
		in.push(out.top());
		out.pop();
	}
}

template <class T>
void ts_queue<T>::push(T t)
{
	in.push(t);
}

template <class T>
void ts_queue<T>::pop()
{
	if (out.empty()) {
		turnover();
	}
	out.pop();
}

template <class T>
int ts_queue<T>::size()
{
	return in.size() + out.size();
}

template <class T>
T ts_queue<T>::front()
{
	if (out.empty()) {
		turnover();
	}
	out.top();
}

template <class T>
T ts_queue<T>::back()
{
	if (in.empty()) {
		turn_back_over();
	}
	in.top();
}

template <class T>
bool ts_queue<T>::empty() const
{
	return in.empty() && out.empty();
}

#endif
