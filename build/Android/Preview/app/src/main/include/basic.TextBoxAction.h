// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/build/Android/Preview/cache/ux15/basic.TextBoxAction.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ITextEditControl.h>
#include <Fuse.Controls.TextInput.h>
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
namespace g{namespace basic{struct TextBoxAction;}}

namespace g{
namespace basic{

// public partial sealed class TextBoxAction :4
// {
::g::Fuse::Controls::TextInput_type* TextBoxAction_typeof();
void TextBoxAction__ctor_8_fn(TextBoxAction* __this);
void TextBoxAction__InitializeUX_fn(TextBoxAction* __this);
void TextBoxAction__New4_fn(TextBoxAction** __retval);

struct TextBoxAction : ::g::Fuse::Controls::TextInput
{
    void ctor_8();
    void InitializeUX();
    static TextBoxAction* New4();
};
// }

}} // ::g::basic
