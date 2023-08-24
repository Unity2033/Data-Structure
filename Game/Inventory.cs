using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Game
{
    internal class Inventory
    {
        uint lineX;
        private Item[] items;

        public Inventory(uint x, uint y)
        {
            lineX = x;
            items = new Item[x * y];
        }

        public void AddItem(Item item)
        {
            for(int i = 0; i < items.Length; i++)
            {
                if (items[i] == null)
                {
                    items[i] = item;
                    break;
                }
            }
        }
    }
}
