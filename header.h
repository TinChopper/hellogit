class Goodluck
{
	private:
		int num;
		std::string name; 
	public:
		Goodluck()
		{
			num = 0;
		}
		void setNum (int myNum)
		{
			num = myNum;
		}
		void setName (std::string myName)
		{
			name = myName;
		}
		int getNum () const
		{
			return num;
		}
		std::string getName () const
		{
			return name;
		}
};
