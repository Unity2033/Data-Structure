using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Game
{
    internal class Item
    {
        private int price;
        private string name;

        public Item(int price, string name)
        {
            this.price = price;
            this.name = name;
        }

        public void Information()
        {
            Console.SetCursorPosition(20, 10);
            Console.WriteLine("name : " + name);

            Console.SetCursorPosition(20, 12);
            Console.WriteLine("price : " + price);
        }
    }
}
