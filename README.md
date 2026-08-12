# FGCT4016 Gameplay Design and Programming
 
## Task 1: Environment Verification Task
Classes in Unreal are all derived from `UOBJECT`, and can be tagged with the `UCLASS` macro in order to make that class visible and interactable within other parts of the editor, such as blueprints.

![UCLASS](./readme/uclass.png)

![UCLASS Reflected](./readme/uclassreflected.png)

Similarly, the `UFUNCTION` and `UPROPERTY` macros can be used to tag functions and variables respectively for the same purpose.

![UPROPERTY](./readme/uproperty.png)

![UPROPERTY Reflected](./readme/upropertyreflected.png)

## Task 2: Actor Lifecycle Logging

![Lifecycle Logging Log](./readme/wascalled.png)

![Lifecycle Logging Header](./readme/wascalledheader.png)

![Lifecycle Logging Code](./readme/wascalledcode.png)

## Unreal Problems
I am having issues getting Unreal working beyond this on my system. It is very laggy, keeps breaking it's own UI, and crashing; I had to do a project config tweak to even get it to open the project. I only use Linux devices and do not own a Windows device, but I expect this is just Unreal poorly supporting it's editor on Linux. My system is of a decent spec (Ryzen 5 5600, 5700xt, 32GB DDR4-3200) so I don't think I should be having these issues. I have not had these issues with any other development tool as someone who regularly uses Unity, Godot, and a variety of IDE and dev tools. I'm probably going to end this task here and move on to other resit work. Thanks!