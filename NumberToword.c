using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NumberToWords
{
    public class NumberToWord
    {
        public static  String[] specialNames = {
        "",
        " thousand",
        " million",
        " billion",
        " trillion",
        " quadrillion",
        " quintillion"
    };

    public static String[] tenToNinty = {
        "",
        " ten",
        " twenty",
        " thirty",
        " forty",
        " fifty",
        " sixty",
        " seventy",
        " eighty",
        " ninety"
    };

    public static String[] oneToNineteen = {
        "",
        " one",
        " two",
        " three",
        " four",
        " five",
        " six",
        " seven",
        " eight",
        " nine",
        " ten",
        " eleven",
        " twelve",
        " thirteen",
        " fourteen",
        " fifteen",
        " sixteen",
        " seventeen",
        " eighteen",
        " nineteen"
    };

    public String convertLessThanOneThousand(Int64 number)
        {
            String current;

            if (number % 100 < 20)
            {
                current = oneToNineteen[number % 100];
                number /= 100;
            }
            else
            {
                current = oneToNineteen[number % 10];
                number /= 10;

                current = tenToNinty[number % 10] + current;
                number /= 10;
            }

            if (number == 0)
                return current;

            return oneToNineteen[number] + " hundred" + current;
        }

        public String convert(Int64 number)
        {

            if (number == 0)
            {
                return "zero";
            }

            String prefix = "";

            if (number < 0)
            {
                number = -number;
                prefix = "negative";
            }

            String current = "";
            Int64 place = 0;

            do
            {
                Int64 n = number % 1000;
                if (n != 0)
                {
                    String s = convertLessThanOneThousand(n);
                    current = s + specialNames[place] + current;
                }
                place++;
                number /= 1000;
            } while (number > 0);

            return (prefix + current).Trim();
        }

        public static void Main(String[] args)
        {
            NumberToWord obj = new NumberToWord();                        
            Int64 num = 1000242712221522282;
            Console.WriteLine(obj.convert(num));
            Console.WriteLine(obj.convert(1234567890));
            Console.WriteLine(obj.convert(-55));
            Console.ReadKey();
        }
    }
}