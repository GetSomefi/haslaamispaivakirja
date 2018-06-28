// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/basic.TitleText.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
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
#include <generaltext.Text.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace basic{struct TitleText;}}

namespace g{
namespace basic{

// public partial sealed class TitleText :4
// {
::g::Fuse::Controls::TextControl_type* TitleText_typeof();
void TitleText__ctor_9_fn(TitleText* __this);
void TitleText__InitializeUX2_fn(TitleText* __this);
void TitleText__New5_fn(TitleText** __retval);

struct TitleText : ::g::generaltext::Text
{
    void ctor_9();
    void InitializeUX2();
    static TitleText* New5();
};
// }

}} // ::g::basic
