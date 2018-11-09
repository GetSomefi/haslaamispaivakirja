// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.9.0/TextControls/TextEdit.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{

// public abstract interface ITextEditControl :18
// {
uInterfaceType* ITextEditControl_typeof();

struct ITextEditControl
{
    void(*fp_add_ActionTriggered)(uObject*, uDelegate*);
    void(*fp_remove_ActionTriggered)(uObject*, uDelegate*);
    static void add_ActionTriggered(const uInterface& __this, uDelegate* value) { __this.VTable<ITextEditControl>()->fp_add_ActionTriggered(__this, value); }
    static void remove_ActionTriggered(const uInterface& __this, uDelegate* value) { __this.VTable<ITextEditControl>()->fp_remove_ActionTriggered(__this, value); }
};
// }

}}} // ::g::Fuse::Controls
