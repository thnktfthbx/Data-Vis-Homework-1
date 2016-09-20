# Data-Vis-Homework-1


Part 1:
     Matlab - This tool has a very strong ability to work with matrixes.  I've used it in Computer Vision classwork to manipulate images and video data, applying filters and transforming it.  I'm not an enormous fan of how the user interface works.  It seems a bit clunky, at least in my limited experience of it. That said, it has a great way of keeping track of variables during testing, with a convenient list of said variables in the upper right, complete with current values and data types.  
      The power of the tool is, I think, mitigated by the fact that it costs a good deal to have access to all of the toolboxes.  I certainly understand the work that goes into making such a tool, but my own practical needs make that somewhat unfeasible for the most part.


	D3 - I've never used this before this week, and while initially there was the usual learning curve hump to get over, I was surprised at how swiftly I feel like I am picking it up.  Partly I attribute this to how it's embedded in html which I have decent experience with.  I am also impressed with the potential for what it can do. I've only learned the basics, but even with that I can see much of how to achieve many of the very impressive example visualizations.
        In addition, there are many web-design tools that seem to work well with javascript, which adds to the ease-of-use.  Overall I am very impressed, and am quite looking forward to using it more and gaining skills with it.



Part 2:

	Visualizations using provided datasets.  I chose to use the first data set, that of some sort of brain scan, which I assume is something like a single slice of an MRI.  And given the choices of tools, I chose to experiment with D3, which I had no experience with, to try to learn a new tool.

	First, the data provided was in a simple text format, with no especially useful formatting other than the differentiation of each row by a newline character.  Therefore I first wrote a quick bit of C++ code to translate it into a JSON format of objects, each with an x, y, and value field.  This allowed to me to import the data much easier.  This can be found in the folder as main.cpp and its related Makefile.

	The four visualizations are found in a set of three html files, named Version1, Version2, and Version3 respectively.

Version 1 interprets the values provided as color intensity, or brightness, with a value of 0 being black and a value of 1 being bright blue.  Each value provided is displayed as a square at the appropriate x and y coordinates, with scale/legent below.  This is a fairly standard interpretation, but shows most of the valuable information easily at a glance, with positional information intact.

Version 2 takes a similar aproach with a small variation, wherein the value of each point is displayed by varying the radius of a circle, keeping the color standardized.  The overall effect is actually quite similar despite this change, because many smaller dots together appear darker when combined with the black background than many larger dots.  I think I would say that this variation is somewhat less usefull, given the limitations of human vision/comprehension.  It feels harder to visually compare many dots for size, and some of the smallest may be lost.

Version 3 combines two further variations on visualization.  First, at the top, the relative proportions of defined intensity categories is displayed, allowing the viewer to ascertain which level of intensity is predominant.  Further, the value is calculated as the area of the circle, rather than the radius, and both the values and what category they represent are displayed for reference.  In retrospect, given the numbers, I feel it is harder to distinguish smaller variation when the value is given as an area like this, since using that number for the radius results in an exponentally larger visual distinction between categories.  This method would be useful if it is important to know exacly how much of a specific value range is present, or if comparing distinct value ranges has meaning.

Below that, is an extension of this idea of breaking down the data into categories, where the brain is displayed very similarly to Version 1, with squares.  But the color is all one color, and only those points with values in the given range are displayed.  This could be developed with interaction so that each category could be clicked on above to view the corresponding locations where that category can be found below.  I'm imagining a situation where a specific intensity suggests a tumor or anurism, and singling out that bandwith would be very important.

A note on color:  I played with some colors, initially going with a green with black background, but then I saw that the example given was that exact color palete, and I felt I should change it.  Blue looked very cool, but it was harder to distinguish details, so I settled on Orange, as being close to yellow (and thus standing out), but being more plesant to my eye.


