// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/build/Android/Preview/cache/ux15/fa_gamepad.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{struct fa_gamepad;}

namespace g{

// public partial sealed class fa_gamepad :2
// {
::g::Fuse::Controls::TextControl_type* fa_gamepad_typeof();
void fa_gamepad__ctor_8_fn(fa_gamepad* __this);
void fa_gamepad__InitializeUX1_fn(fa_gamepad* __this);
void fa_gamepad__New4_fn(fa_gamepad** __retval);

struct fa_gamepad : ::g::Fuse::Controls::Text
{
    void ctor_8();
    void InitializeUX1();
    static fa_gamepad* New4();
};
// }

} // ::g
