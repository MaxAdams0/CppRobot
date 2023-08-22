# CppRobot
Simply, this is the C++ version of Alpha Knights (FRC Team 6695)'s robot. The goal is to have this be the standard, and be the most accessible to newcomers has possible.

## Contributing
Priorities change from person-to-person, but here are the priorities when ***programming***:
1. Functionality
2. Readability
3. Efficiency

Obviously, we want the Robot to actually work, but readability is higher than efficiency, since other people are going to have to understand your code. Making your code take up less lines or characters does not matter, code can still be extremely length but very efficient.

Here are some basic ground rules regarding how code is published to this ***Github repo***:
- There is a new branch for every year, so make sure you push to the right one
- New features are to be made under Pull Requests, NOT DIRECTLY TO THE BRANCH
- Do not push unless you have permission from the Software Lead

# Extra C++ Help
These are more complex parts of C++ that may not be explained in-person for the sake or time or ease-of-teaching. However, there shouldn't be anything extremely complicated withing the code, either.

## Arrow Operators (`->`)
Arrow Operators are used to access members of a structure through a pointer. This is very similar to Dot Operators, except it uses pointers and does not copy the value.

## Structures (`struct`)
A structure, also knows as a struct in syntax, is a way to group several related variables into one place. For example, a struct 'Student' could have an `string 'name'`, `integer 'grade'`, and `double 'GPA'`.

A member is simply a variable that is define (notice I didn't say initialized), in the struct.

## Pointers (`*`)
A pointer is simply a reference in memory to a value. So, if you had an `integer 'GPA'`, a pointer could look in memory, find the variable, and grab its value without having to actually store that value anywhere. This is way more memory efficient, which is why it is used.

# Recources
Random recources, categorized by what they are for. These could be for programming, or just the robot as a whole.

## WPILib
- [WPILib Simulation](https://docs.wpilib.org/en/stable/docs/software/wpilib-tools/robot-simulation/introduction.html)
- [WPILib C++ Docs](https://github.wpilib.org/allwpilib/docs/release/cpp/index.html)
- [Drivetrain Examples](https://docs.wpilib.org/en/stable/docs/zero-to-robot/step-4/creating-test-drivetrain-program-cpp-java.html)
- [PhotonVision](https://docs.photonvision.org/en/latest/docs/getting-started/installation/index.html)

## Other
- [Markdown Cheat Sheet](https://www.markdownguide.org/cheat-sheet/)