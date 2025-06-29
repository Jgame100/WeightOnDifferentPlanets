
//Planets: Mercury, Venus, Mars, Jupiter, Saturn, Uranus, Neptune, Plute, Ceres, Makemake, Eris

#include <iostream>

int main()
{
    std::cout << "Do you want to know your weight on some of the planets near earth? \nEnter your name and weight and this program will tell you!\n";
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;

    std::cout << "\nWhich planet did you want to know about, " << name << "? \n";
    std::cout << "1. Mercury    2. Venus    3. Mars\n4. Jupiter    5. Saturn   6. Uranus\n7. Neptune    8. Pluto    9. Ceres\n10.Makemake   11. Eris\n";
    std::string planetChoice;
    std::cin >> planetChoice;

    if (planetChoice == "1" || planetChoice == "Mercury" || planetChoice == "mercury") {
        std::cout << "\nAlright, you have chosen Mercury. \n";
        std::cout << "Mercury is one of the smaller planets in our solar system, being named after a Roman messenger god for his speed and swiftness.\nMercury isn't really possible to live on due to its high temperatures, solar radiation, and thin atmosphere. During the daytime can reach high's of 800 degrees F, and at night lows of -290 degrees. ";
        std::cout << "Mercury doesnt have ANY moons and speeds around the sun every 88 days.\nMercury has a radius of 2,440 km and has a surface similar to the moon. With it being the second densest planet after earth.";
        std::cout << "\nMercury has a gravitational acceleration of 3.7 m/s². Enter your weight to find out how much you would weigh on Mercury: ";
        double userWeight;
        std::cin >> userWeight;

        double planetWeight = userWeight * 0.38;
        std::cout << "So " << name << ", your weight on Mercury would be " << planetWeight << " lbs or kg.\n";
        std::cout << "Learn about another planet! \n\n";

        return main();
    
    } else if (planetChoice == "2" || planetChoice == "Venus" || planetChoice == "venus") {
        std::cout << "\nAlright, you have chosen Venus. \n";
        std::cout << "Venus, funny enough, is the third brightest object in the sky after the Sun and Moon. Venus spins in the opposite direction of most planets and have a similar structure and size to earth.\n";
        std::cout << "Venus is named after the Roman goddess of love and beauty. Which used to be known as Aphrodite to the ancient Greek. It is the ONLY planet to be named after a female god.\n";
        std::cout << "Venus has a very beautiful, smooth, and stone like look to it but is actually the planet with the hottest surface in the solar system (besides the sun).\n";
        std::cout << "Because of its thick atmosphere it can trap heat easily creating a runaway greenhouse effect. \n";
        std::cout << "One day on Venus is 243 earth days and thats due to the planets incredibly slow rotation, with a sunrise to sunset taking 117 days. You would also be quite disoriented due to the reverse rotation.\n";
        std::cout << "Venus also does not have a moon, and their are some theories that say Venus had oceans but lost them millions of years ago.\n";

        std::cout << "Venus has a gravitational acceleration of 8.87 m/s^2. Enter your weight to find out how much you would weigh on Venus: ";
        double userWeight;
        std::cin >> userWeight;

        double planetWeight = userWeight * 0.91;
        std::cout << "So " << name << ", your weight on Venus would be " << planetWeight << " lbs or kg.\n";
        std::cout << "Learn about another planet! \n\n";

        return main();

    } else if (planetChoice == "3" || planetChoice == "Mars" || planetChoice == "mars") {
        std::cout << "\nAlright, you have chosen Mars. \n";
        std::cout << "Mars is the only planet that we have been able to send Rovers too, as well as the most explored. Mars is named after the Roman god of war because of its red-ish appearance and the ancient civilizations linked that to blood. \n";
        std::cout << "Living on Mars is not ideal due to the thin atmosphere, toxic soil (containing perchlorates), radiation, and the many dust storms. \n";
        std::cout << "Mars is about half as big as earth with a radius of 2,106 miles. Mars orbits around the sun every 24.6 hours which is very similar to earth. \n";
        std::cout << "Mars has two moons, named 'Phobos' and 'Deimos'. They got their names from the horses that belonged to the greek god of war Ares. \n";


        std::cout << "Mars has a gravitational acceleration of 3.73 m/s^2. Enter your weight to find out how much you would weigh on Mars: ";
        double userWeight;
        std::cin >> userWeight;

        double planetWeight = userWeight * 0.38;
        std::cout << "So " << name << ", your weight on Mars would be " << planetWeight << " lbs or kg.\n";
        std::cout << "Learn about another planet! \n\n";

        return main();

    } else if (planetChoice == "4" || planetChoice == "Jupiter" || planetChoice == "jupiter") {
        std::cout << "\nAlright, you have chosen Jupiter. \n";
        std::cout << "Jupiter is the BIGGEST planet around us and is named after the king of the Roman gods. \n";
        std::cout << "It is 11 times wider than Earth and has the shortest day in the solar system oddly enough. It takes 12 years to orbit around the sun, while having four large moons.\n ";
        std::cout << "While having four large moons it has many smaller moons as well. 95 in total. Jupiter does not have an actual surface because it is a mainly gas planet. You couldn't fly through it but you can not land either.\n";




        std::cout << "Jupiter has a gravitational acceleration of 24.79 m/s^2. Enter your weight to find out how much you would weigh on Jupiter: ";
        double userWeight;
        std::cin >> userWeight;

        double planetWeight = userWeight * 2.34;
        std::cout << "So " << name << ", your weight on Jupiter would be " << planetWeight << " lbs or kg.\n";
        std::cout << "Learn about another planet! \n\n";

        return main();

    } else if (planetChoice == "5" || planetChoice == "Saturn" || planetChoice == "saturn") {
        std::cout << "\nAlright, you have chosen Saturn. \n";
        std::cout << "Saturn is the farthest planet from earth and was named after the Roman god of agriculture and wealth, and that same god was the father of Jupiter.\n";
        std::cout << "Saturn is 9 times wider than earth with the second shortest day being 10.7 hours long and taking 29.4 years to orbit the sun.\n";
        std::cout << "The rings around Saturn are thought to be pieces of comets and asteroids but they are actually small pieces of ice coated with rock and otgher dust materials. The sizes can vary from grain like sizes to mountains just floating around Saturn.\n";
        std::cout << "The ring system extends up to 175,000 miles from the planet and the main rings around the planet are A B and C (with D, E, F, G being the more recent discovered ones. \n";
        std::cout << "Also being a gas planet Saturns center is a dense core of metals surrounded by other solidified compounds. Similar to Jupiter's core but smaller. You wouldn't be able to fly through due to the pressure and heat as well as the many rocks flaoting around. \n";





        std::cout << "Saturn has a gravitational acceleration of 10.44 m/s^2. Enter your weight to find out how much you would weigh on Saturn: ";
        double userWeight;
        std::cin >> userWeight;

        double planetWeight = userWeight * 0.93;
        std::cout << "So " << name << ", your weight on Saturn would be " << planetWeight << " lbs or kg.\n";
        std::cout << "Learn about another planet! \n\n";

        return main();

    } else if (planetChoice == "6" || planetChoice == "Uranus" || planetChoice == "uranus") {
        std::cout << "\nAlright, you have chosen Uranus. \n";
        std::cout << "The planet Uranus is a beautiful looking planet, but is alost one of the coldest. William Herschel discovered the planet in 1781 and tried to name it 'Georgium Sidus' after King George III, but it was universally accepted and named as Uranus the Greek god of the sky by Johann Bode. \n";
        std::cout << "Uranus is four times as wide as earth, one day is 17 hours long, and one orbit around the sun takes 84 years to do. \n";
        std::cout << "28 moons are around Uranus and most the moons are half water ice and half rock. Uranus has 2 sets of rings, the inner systems of the nine rings are mostly dark grey rings, the inner most one are reddish dusty rings and the outer is blue like Saturn's. \n ";
        std::cout << "Uranus is made up of icy mateirals such as water, methane and ammonia, while it has a super hot core. (9,000 degrees fahrenheit). So it doesn't have a real surface as it is composed of mainly swirling fluids and gases. \n";



        std::cout << "Uranus has a gravitational acceleration of 8.69 m/s^2. Enter your weight to find out how much you would weigh on Uranus: ";
        double userWeight;
        std::cin >> userWeight;

        double planetWeight = userWeight * 0.92;
        std::cout << "So " << name << ", your weight on Uranus would be " << planetWeight << " lbs or kg.\n";
        std::cout << "Learn about another planet! \n\n";

        return main();

    } else if (planetChoice == "7" || planetChoice == "Neptune" || planetChoice == "neptune") {
        std::cout << "\nAlright, you have chosen Neptune. \n";
        std::cout << "Neptune is the only planet that is not visible to the naked eye and a telescope is needed. Neptune is named after the Roman god of the sea, probably because of its rich blue look. \n";
        std::cout << "Neptune has a diameter of 30,775 miles and is four times as wide as Earth. Neptune was initally recorded as a star by Galileo using his small telescope in 1612. \n";
        std::cout << "Neptune's days are 16 hours long and has similar axial tilts like Earth and Mars meaning this planet also experiences seasons but the seasons last 40 years each with a complete orbit around the sun taking 165 years to complete. \n ";
        std::cout << "Neptune has 16 moons and its largest moon, Triton, named after the son of Poseidon. Triton also is the only moon that flows in the opposite direction of its planet with some astronomers suggesting it was an independent object before. \n";
        std::cout << "Triton is extremely cold and has a surface temperaturat -391 degrees Fahrenheit. The Voyager deployed on the moon found that the atmosphere has been growing warmer but don't know why.... \n";
        std::cout << "Neptune has five main rings and four rings arcs. (Galle, Leverrier, Lassell, Arago, and Adams). Neptune also does not have a surface but is made of water and other materials into a slush like layer covering the rocky core. \n";


        std::cout << "Neptune has a gravitational acceleration of 11.15 m/s^2. Enter your weight to find out how much you would weigh on Neptune: ";
        double userWeight;
        std::cin >> userWeight;

        double planetWeight = userWeight * 1.12;
        std::cout << "So " << name << ", your weight on Neptune would be " << planetWeight << " lbs or kg.\n";
        std::cout << "Learn about another planet! \n\n";

        return main();

    } else if (planetChoice == "8" || planetChoice == "Pluto" || planetChoice == "pluto") {
        std::cout << "\nAlright, you have chosen Pluto. \n";
        std::cout << "Pluto was changed from a planet to a dwarf planet in 2006. The IAU (International Astronomical Union) said 'a dwarf planet is an object in orbit around the Sun that is large enough to pull itself into a nearly round shape but has not been able to clear its orbit of debris.'.  \n";
        std::cout << "Pluto was also named by and 11 year old girl. Venetia Burney suggested the name be the Roman god of the underworld in 1930. He then forwarded the name to the Lowell Observatory and it was selected. \n";
        std::cout << "Pluto is 1/5th the width of Earth and has five moons. Charon, Nix, Hydra, Kerberos, Styx. Charon is the biggest moon and is half the size of pluto.\n ";
        std::cout << "The surface is made up of mountains, long plains, valleys, and deep craters. Pluto gets pretty cold, with the plains being made of frozen nitrogen gas. \n";
        std::cout << "Lastly, Pluto's days take 153 hours and to orbit the sun it takes 248 years. \n";

        std::cout << "Pluto has a gravitational acceleration of 0.62 m/s^2. Enter your weight to find out how much you would weigh on Pluto: ";
        double userWeight;
        std::cin >> userWeight;

        double planetWeight = userWeight * 0.063;
        std::cout << "So " << name << ", your weight on Pluto would be " << planetWeight << " lbs or kg.\n";
        std::cout << "Learn about another planet! \n\n";

        return main();

    } else if (planetChoice == "9" || planetChoice == "Ceres" || planetChoice == "ceres") {
        std::cout << "\nAlright, you have chosen Ceres. \n";
        std::cout << "Ceres was named after the Roman Goddess of corn and harvests. It is also one of the planets that was visited by a spacecraft. Ceres is one of the planets we are hoping to find signs of life due to it having Water which is an essential. \n";
        std::cout << "Ceres is 1/13 the radius of Earth and has one of the shortests days being 9 hours long. Ceres doesn't have any moons or rings and is what scientists describe as an 'embryonic planet'. \n";
        std::cout << "The surface of the planet is made of many craters but not any huge ones. \n";



        std::cout << "Ceres has a gravitational acceleration of 0.27 m/s^2. Enter your weight to find out how much you would weigh on Ceres: ";
        double userWeight;
        std::cin >> userWeight;

        double planetWeight = userWeight * 0.04;
        std::cout << "So " << name << ", your weight on Ceres would be " << planetWeight << " lbs or kg.\n";
        std::cout << "Learn about another planet! \n\n";

        return main();

    } else if (planetChoice == "10" || planetChoice == "Makemake" || planetChoice == "makemake") {
        std::cout << "\nAlright, you have chosen the Makemake. \n";
        std::cout << "Makemake has an odd name and it is from the Rapanui god of fertility. This planet is also pretty cold so life is unlikey to be their. 305 years is how long it takes to have one trip around the sun. \n";
        std::cout << "It has one moon and it is nicknamed MK 2 and approximately 13,000 miles from the planet. There aren't any rings around the planet. We don't know much of the surface of Makemakebut it seems to have a reddish brownish color similar to Pluto. \n";



        std::cout << "Makemake has a gravitational acceleration of 0.5 m/s^2. Enter your weight to find out how much you would weigh on Makemake: ";
        double userWeight;
        std::cin >> userWeight;

        double planetWeight = userWeight * 0.05;
        std::cout << "So " << name << ", your weight on Makemake would be " << planetWeight << " lbs or kg.\n";
        std::cout << "Learn about another planet! \n\n";

        return main();

    } else if (planetChoice == "11" || planetChoice == "Eris" || planetChoice == "eris") {
        std::cout << "\nAlright, you have chosen Eris. \n";
        std::cout << "Eris is named after the Greek goddess of discord and strife. The surface of the planet like other planets is very cold. Eris is about 1/5th the width of Earth and takes 557 years to make one trip around the Sun. \n";
        std::cout << "Eris has no rings but has one very small moon called 'Dysnomia'. This planet is part of a group of objects that orbit in a zone beyong the orbit of Neptune called the Kuiper Belt. \n";


        std::cout << "Eris has a gravitational acceleration of 0.82 m/s^2. Enter your weight to find out how much you would weigh on Eris: ";
        double userWeight;
        std::cin >> userWeight;

        double planetWeight = userWeight * 0.08;
        std::cout << "So " << name << ", your weight on Eris would be " << planetWeight << " lbs or kg.\n";
        std::cout << "Learn about another planet! \n\n";

        return main();

    } else {

        std::cout << "\nWrong input, try again.";

    }

}


