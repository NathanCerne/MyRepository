/*
*	Created by Nathan Cerne for IT179
*
*	Java implementation of a stack data structure
*/
public class Stack
{

    private final int Initial_Capacity = 10;
    private char[] list = new char[Initial_Capacity];
    private int size = 0;

    public boolean isEmpty()
    {
        return (size == 0);
    }

    public void push(char item)
    {
        list[size] = item;
        size++;
    }

    public void pop()
    {
        size--;
    }

    public char top()
    {
        return list[size - 1];
    }

    public void clear()
    {
        size = 0;
        list = new char[Initial_Capacity];
    }
}