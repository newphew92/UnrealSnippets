# UnrealSnippets
Snippets with functional components that is potentially recyclable for future Unreal projects

*Important Notes:*

One must create a JSON object and use getters and setters to create the object. Once finished, you can serialize the object and save it as a string to a file. "Write" functions directly write Json-format strings and are only useful for testing boilerplate functions needed to setup saving/loading json files. One should always use the "set" functions and then use serialize.

The opposite is much more straightforward: deserialize your file into a JSON object and suddenly all your needed data is accessible through "get" functions. 

Happy Saving
