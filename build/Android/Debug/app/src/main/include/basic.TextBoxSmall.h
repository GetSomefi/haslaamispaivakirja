// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux13/basic.TextBoxSmall.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.TextBox.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
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
namespace g{namespace basic{struct TextBoxSmall;}}

namespace g{
namespace basic{

// public partial sealed class TextBoxSmall :4
// {
::g::Fuse::Controls::TextInputControl_type* TextBoxSmall_typeof();
void TextBoxSmall__ctor_9_fn(TextBoxSmall* __this);
void TextBoxSmall__InitializeUX1_fn(TextBoxSmall* __this);
void TextBoxSmall__New5_fn(TextBoxSmall** __retval);

struct TextBoxSmall : ::g::Fuse::Controls::TextBox
{
    void ctor_9();
    void InitializeUX1();
    static TextBoxSmall* New5();
};
// }

}} // ::g::basic
