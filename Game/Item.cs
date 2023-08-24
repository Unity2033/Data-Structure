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
    }
}
