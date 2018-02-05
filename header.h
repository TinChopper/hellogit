class Goodluck
{
	private:
		int num;
		string name;
	public:
		Goodluck()
		{
			num = 0;
			name =" ";
		}
		void setNum (int myNum)
		{
			num = myNum;
		}
		void setName (string myName)
		{
			name = myName;
		}
		int getNum () const
		{
			return num;
		}
		string getName () const
		{
			return name;
		}
};