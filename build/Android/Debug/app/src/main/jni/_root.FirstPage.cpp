// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/FirstPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BasicSwipeToggle.h>
#include <_root.BasicSwipeToggleBig.h>
#include <_root.fa_chevron_left.h>
#include <_root.fa_cog.h>
#include <_root.FirstPage.h>
#include <_root.Haslaamispaivak-88fc3c5a.h>
#include <_root.Haslaamispaivak-8c2039a.h>
#include <_root.Haslaamispaivak-a8299899.h>
#include <_root.Haslaamispaivak-ca5ba5e4.h>
#include <basic.LabelText.h>
#include <basic.TextBoxAction.h>
#include <basic.TitleText.h>
#include <basicBtn.Button.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.RangeControl.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Slider.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Motion.SpringFunction.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Multiply.h>
#include <Fuse.Reactive.Property.h>
#include <header.Text.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Unit.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[132];
static uType* TYPES[7];

namespace g{

// public partial sealed class FirstPage :2
// {
// static FirstPage() :130
static void FirstPage__cctor_4_fn(uType* __type)
{
    FirstPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 60, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb0"*/], ::STRINGS[2/*"temp_eb1"*/], ::STRINGS[3/*"mita_kiusaus"*/], ::STRINGS[4/*"mita_varkaus"*/], ::STRINGS[5/*"mita_inho"*/], ::STRINGS[6/*"mita_teinva...*/], ::STRINGS[7/*"mita_riitely"*/], ::STRINGS[8/*"mita_muuta"*/], ::STRINGS[9/*"temp_eb2"*/], ::STRINGS[10/*"milloin_aamu"*/], ::STRINGS[11/*"milloin_ilt...*/], ::STRINGS[12/*"milloin_ilta"*/], ::STRINGS[13/*"missa_koulu"*/], ::STRINGS[14/*"missa_asunt...*/], ::STRINGS[15/*"missa_liiku...*/], ::STRINGS[16/*"missa_olesk...*/], ::STRINGS[17/*"missa_wc"*/], ::STRINGS[18/*"missa_kanslia"*/], ::STRINGS[19/*"missa_ruokala"*/], ::STRINGS[20/*"missa_ulkona"*/], ::STRINGS[21/*"missa_kadulla"*/], ::STRINGS[22/*"missa_kayta...*/], ::STRINGS[23/*"missa_toissa"*/], ::STRINGS[24/*"missa_muualla"*/], ::STRINGS[25/*"temp_eb3"*/], ::STRINGS[26/*"kuka_toinen"*/], ::STRINGS[27/*"kuka_vanhem...*/], ::STRINGS[28/*"kuka_opettaja"*/], ::STRINGS[29/*"kuka_kouluk...*/], ::STRINGS[30/*"kuka_jokumuu"*/], ::STRINGS[31/*"temp_eb4"*/], ::STRINGS[32/*"mitateit_loin"*/], ::STRINGS[33/*"mitateit_ju...*/], ::STRINGS[34/*"mitateit_hu...*/], ::STRINGS[35/*"mitateit_it...*/], ::STRINGS[36/*"mitateit_ka...*/], ::STRINGS[37/*"mitateit_ri...*/], ::STRINGS[38/*"mitateit_ke...*/], ::STRINGS[39/*"mitateit_ke...*/], ::STRINGS[40/*"mitateit_en...*/], ::STRINGS[41/*"mitateit_ho...*/], ::STRINGS[42/*"mitateit_vi...*/], ::STRINGS[43/*"temp_eb5"*/], ::STRINGS[44/*"mitateit_so...*/], ::STRINGS[45/*"temp_eb6"*/], ::STRINGS[46/*"mitateit_jo...*/], ::STRINGS[47/*"temp_eb7"*/], ::STRINGS[48/*"viha_kihisi...*/], ::STRINGS[49/*"viha_todell...*/], ::STRINGS[50/*"viha_melkov...*/], ::STRINGS[51/*"viha_lievav...*/], ::STRINGS[52/*"viha_enlain...*/], ::STRINGS[53/*"slider_viha"*/], ::STRINGS[54/*"hallinta_1"*/], ::STRINGS[55/*"hallinta_2"*/], ::STRINGS[56/*"hallinta_3"*/], ::STRINGS[57/*"hallinta_4"*/], ::STRINGS[58/*"hallinta_5"*/], ::STRINGS[59/*"slider_hall...*/]);
    FirstPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[60/*"Value"*/]);
    FirstPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[61/*"X"*/]);
    FirstPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"mita_kiusaus"*/]);
    FirstPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"mita_varkaus"*/]);
    FirstPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"mita_inho"*/]);
    FirstPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"mita_teinva...*/]);
    FirstPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[7/*"mita_riitely"*/]);
    FirstPage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[8/*"mita_muuta"*/]);
    FirstPage::__selector8_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[10/*"milloin_aamu"*/]);
    FirstPage::__selector9_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[11/*"milloin_ilt...*/]);
    FirstPage::__selector10_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[12/*"milloin_ilta"*/]);
    FirstPage::__selector11_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[13/*"missa_koulu"*/]);
    FirstPage::__selector12_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[14/*"missa_asunt...*/]);
    FirstPage::__selector13_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[15/*"missa_liiku...*/]);
    FirstPage::__selector14_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[16/*"missa_olesk...*/]);
    FirstPage::__selector15_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[17/*"missa_wc"*/]);
    FirstPage::__selector16_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[18/*"missa_kanslia"*/]);
    FirstPage::__selector17_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[19/*"missa_ruokala"*/]);
    FirstPage::__selector18_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[20/*"missa_ulkona"*/]);
    FirstPage::__selector19_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[21/*"missa_kadulla"*/]);
    FirstPage::__selector20_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[22/*"missa_kayta...*/]);
    FirstPage::__selector21_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[23/*"missa_toissa"*/]);
    FirstPage::__selector22_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[24/*"missa_muualla"*/]);
    FirstPage::__selector23_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[26/*"kuka_toinen"*/]);
    FirstPage::__selector24_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[27/*"kuka_vanhem...*/]);
    FirstPage::__selector25_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[28/*"kuka_opettaja"*/]);
    FirstPage::__selector26_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[29/*"kuka_kouluk...*/]);
    FirstPage::__selector27_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[30/*"kuka_jokumuu"*/]);
    FirstPage::__selector28_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[32/*"mitateit_loin"*/]);
    FirstPage::__selector29_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[33/*"mitateit_ju...*/]);
    FirstPage::__selector30_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[34/*"mitateit_hu...*/]);
    FirstPage::__selector31_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[35/*"mitateit_it...*/]);
    FirstPage::__selector32_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[36/*"mitateit_ka...*/]);
    FirstPage::__selector33_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[37/*"mitateit_ri...*/]);
    FirstPage::__selector34_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[38/*"mitateit_ke...*/]);
    FirstPage::__selector35_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[39/*"mitateit_ke...*/]);
    FirstPage::__selector36_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[40/*"mitateit_en...*/]);
    FirstPage::__selector37_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[41/*"mitateit_ho...*/]);
    FirstPage::__selector38_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[42/*"mitateit_vi...*/]);
    FirstPage::__selector39_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[44/*"mitateit_so...*/]);
    FirstPage::__selector40_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[46/*"mitateit_jo...*/]);
    FirstPage::__selector41_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[48/*"viha_kihisi...*/]);
    FirstPage::__selector42_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[49/*"viha_todell...*/]);
    FirstPage::__selector43_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[50/*"viha_melkov...*/]);
    FirstPage::__selector44_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[51/*"viha_lievav...*/]);
    FirstPage::__selector45_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[52/*"viha_enlain...*/]);
    FirstPage::__selector46_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[53/*"slider_viha"*/]);
    FirstPage::__selector47_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[54/*"hallinta_1"*/]);
    FirstPage::__selector48_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[55/*"hallinta_2"*/]);
    FirstPage::__selector49_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[56/*"hallinta_3"*/]);
    FirstPage::__selector50_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[57/*"hallinta_4"*/]);
    FirstPage::__selector51_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[58/*"hallinta_5"*/]);
    FirstPage::__selector52_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[59/*"slider_hall...*/]);
}

static void FirstPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb0");
    ::STRINGS[2] = uString::Const("temp_eb1");
    ::STRINGS[3] = uString::Const("mita_kiusaus");
    ::STRINGS[4] = uString::Const("mita_varkaus");
    ::STRINGS[5] = uString::Const("mita_inho");
    ::STRINGS[6] = uString::Const("mita_teinvaarin");
    ::STRINGS[7] = uString::Const("mita_riitely");
    ::STRINGS[8] = uString::Const("mita_muuta");
    ::STRINGS[9] = uString::Const("temp_eb2");
    ::STRINGS[10] = uString::Const("milloin_aamu");
    ::STRINGS[11] = uString::Const("milloin_iltapaiva");
    ::STRINGS[12] = uString::Const("milloin_ilta");
    ::STRINGS[13] = uString::Const("missa_koulu");
    ::STRINGS[14] = uString::Const("missa_asuntola");
    ::STRINGS[15] = uString::Const("missa_liikuntasali");
    ::STRINGS[16] = uString::Const("missa_oleskelutila");
    ::STRINGS[17] = uString::Const("missa_wc");
    ::STRINGS[18] = uString::Const("missa_kanslia");
    ::STRINGS[19] = uString::Const("missa_ruokala");
    ::STRINGS[20] = uString::Const("missa_ulkona");
    ::STRINGS[21] = uString::Const("missa_kadulla");
    ::STRINGS[22] = uString::Const("missa_kaytavalla");
    ::STRINGS[23] = uString::Const("missa_toissa");
    ::STRINGS[24] = uString::Const("missa_muualla");
    ::STRINGS[25] = uString::Const("temp_eb3");
    ::STRINGS[26] = uString::Const("kuka_toinen");
    ::STRINGS[27] = uString::Const("kuka_vanhempihoitaja");
    ::STRINGS[28] = uString::Const("kuka_opettaja");
    ::STRINGS[29] = uString::Const("kuka_koulukuraattori");
    ::STRINGS[30] = uString::Const("kuka_jokumuu");
    ::STRINGS[31] = uString::Const("temp_eb4");
    ::STRINGS[32] = uString::Const("mitateit_loin");
    ::STRINGS[33] = uString::Const("mitateit_juoksin");
    ::STRINGS[34] = uString::Const("mitateit_huusin");
    ::STRINGS[35] = uString::Const("mitateit_itkin");
    ::STRINGS[36] = uString::Const("mitateit_kavelinpois");
    ::STRINGS[37] = uString::Const("mitateit_rikoinjotain");
    ::STRINGS[38] = uString::Const("mitateit_kerroinaiku");
    ::STRINGS[39] = uString::Const("mitateit_kerroinkave");
    ::STRINGS[40] = uString::Const("mitateit_envalittanut");
    ::STRINGS[41] = uString::Const("mitateit_hoidinasianpuhumalla");
    ::STRINGS[42] = uString::Const("mitateit_vihanhallinanmenetelma");
    ::STRINGS[43] = uString::Const("temp_eb5");
    ::STRINGS[44] = uString::Const("mitateit_sosiaalinentaito");
    ::STRINGS[45] = uString::Const("temp_eb6");
    ::STRINGS[46] = uString::Const("mitateit_jotainmuuta");
    ::STRINGS[47] = uString::Const("temp_eb7");
    ::STRINGS[48] = uString::Const("viha_kihisinraivosta");
    ::STRINGS[49] = uString::Const("viha_todellavihainen");
    ::STRINGS[50] = uString::Const("viha_melkovihainen");
    ::STRINGS[51] = uString::Const("viha_lievaviha");
    ::STRINGS[52] = uString::Const("viha_enlainkaan");
    ::STRINGS[53] = uString::Const("slider_viha");
    ::STRINGS[54] = uString::Const("hallinta_1");
    ::STRINGS[55] = uString::Const("hallinta_2");
    ::STRINGS[56] = uString::Const("hallinta_3");
    ::STRINGS[57] = uString::Const("hallinta_4");
    ::STRINGS[58] = uString::Const("hallinta_5");
    ::STRINGS[59] = uString::Const("slider_hallinta");
    ::STRINGS[60] = uString::Const("Value");
    ::STRINGS[61] = uString::Const("X");
    ::STRINGS[62] = uString::Const("goBack");
    ::STRINGS[63] = uString::Const("welcomeText");
    ::STRINGS[64] = uString::Const("goToOldEntrys");
    ::STRINGS[65] = uString::Const("onType1");
    ::STRINGS[66] = uString::Const("onType2");
    ::STRINGS[67] = uString::Const("onType3");
    ::STRINGS[68] = uString::Const("onType6");
    ::STRINGS[69] = uString::Const("onType4");
    ::STRINGS[70] = uString::Const("onType5");
    ::STRINGS[71] = uString::Const("FirstPage.ux");
    ::STRINGS[72] = uString::Const("The Mood");
    ::STRINGS[73] = uString::Const("Katso vanhat");
    ::STRINGS[74] = uString::Const("Mill\303\244 tuulella t\303\244n\303\244\303\244n?");
    ::STRINGS[75] = uString::Const("Kerro hieman t\303\244m\303\244n p\303\244iv\303\244n vihanhallinnastasi.");
    ::STRINGS[76] = uString::Const("Mit\303\244 tapahtui?");
    ::STRINGS[77] = uString::Const("Joku kiusasi minua.");
    ::STRINGS[78] = uString::Const("Joku otti jotain minulle kuuluvaa.");
    ::STRINGS[79] = uString::Const("Joku teki jotain, mist\303\244 en pit\303\244nyt.");
    ::STRINGS[80] = uString::Const("Tein jotain v\303\244\303\244rin.");
    ::STRINGS[81] = uString::Const("Joku alkoi riidell\303\244 tai tapella kanssani.");
    ::STRINGS[82] = uString::Const("Muuta");
    ::STRINGS[83] = uString::Const("Milloin?");
    ::STRINGS[84] = uString::Const("Aamu");
    ::STRINGS[85] = uString::Const("Iltap\303\244iv\303\244");
    ::STRINGS[86] = uString::Const("Ilta");
    ::STRINGS[87] = uString::Const("Miss\303\244 olit?");
    ::STRINGS[88] = uString::Const("Luokassa/koulussa");
    ::STRINGS[89] = uString::Const("Asuntolassa");
    ::STRINGS[90] = uString::Const("Liikuntasalissa");
    ::STRINGS[91] = uString::Const("Oleskelutiloissa");
    ::STRINGS[92] = uString::Const("WC:ss\303\244");
    ::STRINGS[93] = uString::Const("Kansliassa");
    ::STRINGS[94] = uString::Const("Ruokalassa");
    ::STRINGS[95] = uString::Const("Ulkona/pihalla");
    ::STRINGS[96] = uString::Const("Kadulla");
    ::STRINGS[97] = uString::Const("K\303\244yt\303\244v\303\244ll\303\244");
    ::STRINGS[98] = uString::Const("T\303\266iss\303\244");
    ::STRINGS[99] = uString::Const("Muualla, miss\303\244?");
    ::STRINGS[100] = uString::Const("Kuka tuo toinen henkil\303\266 oli?");
    ::STRINGS[101] = uString::Const("Toinen nuori");
    ::STRINGS[102] = uString::Const("Vanhempi / hoitaja");
    ::STRINGS[103] = uString::Const("Opettaja");
    ::STRINGS[104] = uString::Const("Koulukuraattori");
    ::STRINGS[105] = uString::Const("Joku muu");
    ::STRINGS[106] = uString::Const("Mit\303\244 teit?");
    ::STRINGS[107] = uString::Const("L\303\266in takaisin");
    ::STRINGS[108] = uString::Const("Juoksin pois");
    ::STRINGS[109] = uString::Const("Huusin");
    ::STRINGS[110] = uString::Const("Itkin");
    ::STRINGS[111] = uString::Const("K\303\244velin pois rauhallisesti");
    ::STRINGS[112] = uString::Const("Rikoin jotain");
    ::STRINGS[113] = uString::Const("Kerroin aikuiselle");
    ::STRINGS[114] = uString::Const("Kerroin kaverille");
    ::STRINGS[115] = uString::Const("En v\303\244litt\303\244nyt asiasta");
    ::STRINGS[116] = uString::Const("Hoidin asian puhumalla");
    ::STRINGS[117] = uString::Const("K\303\244ytin vihanhallinan menetelm\303\244\303\244 (mit\303\244)");
    ::STRINGS[118] = uString::Const("K\303\244ytin sosiaalista taitoa (mit\303\244)");
    ::STRINGS[119] = uString::Const("Jotain muuta");
    ::STRINGS[120] = uString::Const("Kuinka vihainen olit?");
    ::STRINGS[121] = uString::Const("Kihisin raivosta");
    ::STRINGS[122] = uString::Const("Todella vihainen");
    ::STRINGS[123] = uString::Const("Melko vihainen");
    ::STRINGS[124] = uString::Const("Liev\303\244sti vihainen, mutta silti OK");
    ::STRINGS[125] = uString::Const("En lainkaan vihainen");
    ::STRINGS[126] = uString::Const("Kuinka hyvin hallitsit itsesi?");
    ::STRINGS[127] = uString::Const("Huonosti");
    ::STRINGS[128] = uString::Const("En kovin hyvin");
    ::STRINGS[129] = uString::Const("Melko hyvin");
    ::STRINGS[130] = uString::Const("Hyvin");
    ::STRINGS[131] = uString::Const("Todella hienosti");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::Haslaamispaivakirja_accessor_Fuse_Controls_RangeControl_Value_typeof(),
        ::g::Haslaamispaivakirja_bundle_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(121,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(FirstPage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(FirstPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(FirstPage, temp1_X_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(FirstPage, temp2_X_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(FirstPage, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(FirstPage, temp_eb1), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mita_kiusaus), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mita_varkaus), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mita_inho), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mita_teinvaarin), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mita_riitely), 0,
        ::g::basic::TextBoxAction_typeof(), offsetof(FirstPage, mita_muuta), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(FirstPage, temp_eb2), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, milloin_aamu), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, milloin_iltapaiva), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, milloin_ilta), 0,
        ::g::BasicSwipeToggle_typeof(), offsetof(FirstPage, missa_koulu), 0,
        ::g::BasicSwipeToggle_typeof(), offsetof(FirstPage, missa_asuntola), 0,
        ::g::BasicSwipeToggle_typeof(), offsetof(FirstPage, missa_liikuntasali), 0,
        ::g::BasicSwipeToggle_typeof(), offsetof(FirstPage, missa_oleskelutila), 0,
        ::g::BasicSwipeToggle_typeof(), offsetof(FirstPage, missa_wc), 0,
        ::g::BasicSwipeToggle_typeof(), offsetof(FirstPage, missa_kanslia), 0,
        ::g::BasicSwipeToggle_typeof(), offsetof(FirstPage, missa_ruokala), 0,
        ::g::BasicSwipeToggle_typeof(), offsetof(FirstPage, missa_ulkona), 0,
        ::g::BasicSwipeToggle_typeof(), offsetof(FirstPage, missa_kadulla), 0,
        ::g::BasicSwipeToggle_typeof(), offsetof(FirstPage, missa_kaytavalla), 0,
        ::g::BasicSwipeToggle_typeof(), offsetof(FirstPage, missa_toissa), 0,
        ::g::basic::TextBoxAction_typeof(), offsetof(FirstPage, missa_muualla), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(FirstPage, temp_eb3), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, kuka_toinen), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, kuka_vanhempihoitaja), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, kuka_opettaja), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, kuka_koulukuraattori), 0,
        ::g::basic::TextBoxAction_typeof(), offsetof(FirstPage, kuka_jokumuu), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(FirstPage, temp_eb4), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_loin), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_juoksin), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_huusin), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_itkin), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_kavelinpois), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_rikoinjotain), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_kerroinaiku), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_kerroinkave), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_envalittanut), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, mitateit_hoidinasianpuhumalla), 0,
        ::g::basic::TextBoxAction_typeof(), offsetof(FirstPage, mitateit_vihanhallinanmenetelma), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(FirstPage, temp_eb5), 0,
        ::g::basic::TextBoxAction_typeof(), offsetof(FirstPage, mitateit_sosiaalinentaito), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(FirstPage, temp_eb6), 0,
        ::g::basic::TextBoxAction_typeof(), offsetof(FirstPage, mitateit_jotainmuuta), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(FirstPage, temp_eb7), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, viha_kihisinraivosta), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, viha_todellavihainen), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, viha_melkovihainen), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, viha_lievaviha), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, viha_enlainkaan), 0,
        ::g::Fuse::Controls::Slider_typeof(), offsetof(FirstPage, slider_viha), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, hallinta_1), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, hallinta_2), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, hallinta_3), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, hallinta_4), 0,
        ::g::BasicSwipeToggleBig_typeof(), offsetof(FirstPage, hallinta_5), 0,
        ::g::Fuse::Controls::Slider_typeof(), offsetof(FirstPage, slider_hallinta), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(FirstPage, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&FirstPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector18_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector19_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector20_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector21_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector22_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector23_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector24_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector25_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector26_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector27_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector28_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector29_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector30_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector31_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector32_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector33_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector34_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector35_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector36_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector37_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector38_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector39_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector40_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector41_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector42_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector43_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector44_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector45_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector46_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector47_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector48_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector49_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector50_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector51_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FirstPage::__selector52_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* FirstPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 239;
    options.InterfaceCount = 19;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(FirstPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("FirstPage", options);
    type->fp_build_ = FirstPage_build;
    type->fp_cctor_ = FirstPage__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public FirstPage(Fuse.Navigation.Router router) :134
void FirstPage__ctor_8_fn(FirstPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :140
void FirstPage__InitializeUX_fn(FirstPage* __this)
{
    __this->InitializeUX();
}

// public FirstPage New(Fuse.Navigation.Router router) :134
void FirstPage__New5_fn(::g::Fuse::Navigation::Router* router1, FirstPage** __retval)
{
    *__retval = FirstPage::New5(router1);
}

uSStrong<uArray*> FirstPage::__g_static_nametable1_;
::g::Uno::UX::Selector FirstPage::__selector0_;
::g::Uno::UX::Selector FirstPage::__selector1_;
::g::Uno::UX::Selector FirstPage::__selector2_;
::g::Uno::UX::Selector FirstPage::__selector3_;
::g::Uno::UX::Selector FirstPage::__selector4_;
::g::Uno::UX::Selector FirstPage::__selector5_;
::g::Uno::UX::Selector FirstPage::__selector6_;
::g::Uno::UX::Selector FirstPage::__selector7_;
::g::Uno::UX::Selector FirstPage::__selector8_;
::g::Uno::UX::Selector FirstPage::__selector9_;
::g::Uno::UX::Selector FirstPage::__selector10_;
::g::Uno::UX::Selector FirstPage::__selector11_;
::g::Uno::UX::Selector FirstPage::__selector12_;
::g::Uno::UX::Selector FirstPage::__selector13_;
::g::Uno::UX::Selector FirstPage::__selector14_;
::g::Uno::UX::Selector FirstPage::__selector15_;
::g::Uno::UX::Selector FirstPage::__selector16_;
::g::Uno::UX::Selector FirstPage::__selector17_;
::g::Uno::UX::Selector FirstPage::__selector18_;
::g::Uno::UX::Selector FirstPage::__selector19_;
::g::Uno::UX::Selector FirstPage::__selector20_;
::g::Uno::UX::Selector FirstPage::__selector21_;
::g::Uno::UX::Selector FirstPage::__selector22_;
::g::Uno::UX::Selector FirstPage::__selector23_;
::g::Uno::UX::Selector FirstPage::__selector24_;
::g::Uno::UX::Selector FirstPage::__selector25_;
::g::Uno::UX::Selector FirstPage::__selector26_;
::g::Uno::UX::Selector FirstPage::__selector27_;
::g::Uno::UX::Selector FirstPage::__selector28_;
::g::Uno::UX::Selector FirstPage::__selector29_;
::g::Uno::UX::Selector FirstPage::__selector30_;
::g::Uno::UX::Selector FirstPage::__selector31_;
::g::Uno::UX::Selector FirstPage::__selector32_;
::g::Uno::UX::Selector FirstPage::__selector33_;
::g::Uno::UX::Selector FirstPage::__selector34_;
::g::Uno::UX::Selector FirstPage::__selector35_;
::g::Uno::UX::Selector FirstPage::__selector36_;
::g::Uno::UX::Selector FirstPage::__selector37_;
::g::Uno::UX::Selector FirstPage::__selector38_;
::g::Uno::UX::Selector FirstPage::__selector39_;
::g::Uno::UX::Selector FirstPage::__selector40_;
::g::Uno::UX::Selector FirstPage::__selector41_;
::g::Uno::UX::Selector FirstPage::__selector42_;
::g::Uno::UX::Selector FirstPage::__selector43_;
::g::Uno::UX::Selector FirstPage::__selector44_;
::g::Uno::UX::Selector FirstPage::__selector45_;
::g::Uno::UX::Selector FirstPage::__selector46_;
::g::Uno::UX::Selector FirstPage::__selector47_;
::g::Uno::UX::Selector FirstPage::__selector48_;
::g::Uno::UX::Selector FirstPage::__selector49_;
::g::Uno::UX::Selector FirstPage::__selector50_;
::g::Uno::UX::Selector FirstPage::__selector51_;
::g::Uno::UX::Selector FirstPage::__selector52_;

// public FirstPage(Fuse.Navigation.Router router) [instance] :134
void FirstPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :140
void FirstPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, FirstPage::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[62/*"goBack"*/]);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::Haslaamispaivakirja_FuseControlsTextControl_Value_Property::New1(temp, FirstPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[63/*"welcomeText"*/]);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[64/*"goToOldEntrys"*/]);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[65/*"onType1"*/]);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[66/*"onType2"*/]);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[67/*"onType3"*/]);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[68/*"onType6"*/]);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[69/*"onType4"*/]);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[70/*"onType5"*/]);
    slider_viha = ::g::Fuse::Controls::Slider::New5();
    ::g::Fuse::Reactive::Constant* temp12 = ::g::Fuse::Reactive::Constant::New1(slider_viha);
    ::g::Fuse::Reactive::Property* temp13 = ::g::Fuse::Reactive::Property::New1(temp12, ::g::Haslaamispaivakirja_accessor_Fuse_Controls_RangeControl_Value::Singleton());
    ::g::Fuse::Motion::SpringFunction* temp14 = ::g::Fuse::Motion::SpringFunction::New1(temp13);
    ::g::Uno::UX::Size temp15 = ::g::Uno::UX::Size__New1(30.0f, 4);
    ::g::Fuse::Reactive::Constant* temp16 = ::g::Fuse::Reactive::Constant::New1(uBox(::g::Uno::UX::Size_typeof(), temp15));
    ::g::Fuse::Reactive::Multiply* temp17 = ::g::Fuse::Reactive::Multiply::New1(temp14, temp16);
    ::g::Uno::UX::Size temp18 = ::g::Uno::UX::Size__New1(50.0f, 4);
    ::g::Fuse::Reactive::Constant* temp19 = ::g::Fuse::Reactive::Constant::New1(uBox(::g::Uno::UX::Size_typeof(), temp18));
    ::g::Fuse::Controls::Rectangle* temp1 = ::g::Fuse::Controls::Rectangle::New3();
    temp1_X_inst = ::g::Haslaamispaivakirja_FuseElementsElement_X_Property::New1(temp1, FirstPage::__selector1_);
    ::g::Fuse::Reactive::Add* temp20 = ::g::Fuse::Reactive::Add::New1(temp17, temp19);
    slider_hallinta = ::g::Fuse::Controls::Slider::New5();
    ::g::Fuse::Reactive::Constant* temp21 = ::g::Fuse::Reactive::Constant::New1(slider_hallinta);
    ::g::Fuse::Reactive::Property* temp22 = ::g::Fuse::Reactive::Property::New1(temp21, ::g::Haslaamispaivakirja_accessor_Fuse_Controls_RangeControl_Value::Singleton());
    ::g::Fuse::Motion::SpringFunction* temp23 = ::g::Fuse::Motion::SpringFunction::New1(temp22);
    ::g::Uno::UX::Size temp24 = ::g::Uno::UX::Size__New1(30.0f, 4);
    ::g::Fuse::Reactive::Constant* temp25 = ::g::Fuse::Reactive::Constant::New1(uBox(::g::Uno::UX::Size_typeof(), temp24));
    ::g::Fuse::Reactive::Multiply* temp26 = ::g::Fuse::Reactive::Multiply::New1(temp23, temp25);
    ::g::Uno::UX::Size temp27 = ::g::Uno::UX::Size__New1(50.0f, 4);
    ::g::Fuse::Reactive::Constant* temp28 = ::g::Fuse::Reactive::Constant::New1(uBox(::g::Uno::UX::Size_typeof(), temp27));
    ::g::Fuse::Controls::Rectangle* temp2 = ::g::Fuse::Controls::Rectangle::New3();
    temp2_X_inst = ::g::Haslaamispaivakirja_FuseElementsElement_X_Property::New1(temp2, FirstPage::__selector1_);
    ::g::Fuse::Reactive::Add* temp29 = ::g::Fuse::Reactive::Add::New1(temp26, temp28);
    ::g::Fuse::Reactive::JavaScript* temp30 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Image* temp31 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp32 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::DockPanel* temp33 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp34 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp35 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp36 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::fa_chevron_left* temp37 = ::g::fa_chevron_left::New4();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3);
    ::g::Fuse::Controls::StackPanel* temp38 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::header::Text* temp39 = ::g::header::Text::New4();
    ::g::Fuse::Reactive::DataBinding* temp40 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp4, 3);
    ::g::Fuse::Controls::StackPanel* temp41 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp42 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::fa_cog* temp43 = ::g::fa_cog::New4();
    ::g::Fuse::Drawing::LinearGradient* temp44 = ::g::Fuse::Drawing::LinearGradient::New2();
    ::g::Fuse::Drawing::GradientStop* temp45 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp46 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Controls::ScrollView* temp47 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp48 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::basicBtn::Button* temp49 = ::g::basicBtn::Button::New4();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp5);
    ::g::header::Text* temp50 = ::g::header::Text::New4();
    ::g::Fuse::Controls::Text* temp51 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::StackPanel* temp52 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp53 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::basic::TitleText* temp54 = ::g::basic::TitleText::New5();
    ::g::Fuse::Controls::StackPanel* temp55 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp56 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp57 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp58 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp59 = ::g::Fuse::Controls::Grid::New4();
    mita_kiusaus = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp60 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp61 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp62 = ::g::Fuse::Controls::Grid::New4();
    mita_varkaus = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp63 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp64 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp65 = ::g::Fuse::Controls::Grid::New4();
    mita_inho = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp66 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp67 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp68 = ::g::Fuse::Controls::Grid::New4();
    mita_teinvaarin = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp69 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp70 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp71 = ::g::Fuse::Controls::Grid::New4();
    mita_riitely = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp72 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp73 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp74 = ::g::Fuse::Controls::Grid::New4();
    mita_muuta = ::g::basic::TextBoxAction::New4();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6);
    ::g::Fuse::Controls::StackPanel* temp75 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp76 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::basic::TitleText* temp77 = ::g::basic::TitleText::New5();
    ::g::Fuse::Controls::StackPanel* temp78 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp79 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp80 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp81 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp82 = ::g::Fuse::Controls::Grid::New4();
    milloin_aamu = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp83 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp84 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp85 = ::g::Fuse::Controls::Grid::New4();
    milloin_iltapaiva = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp86 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp87 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp88 = ::g::Fuse::Controls::Grid::New4();
    milloin_ilta = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp89 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp90 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp91 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::basic::TitleText* temp92 = ::g::basic::TitleText::New5();
    ::g::Fuse::Controls::StackPanel* temp93 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp94 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp95 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp96 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp97 = ::g::Fuse::Controls::Grid::New4();
    missa_koulu = ::g::BasicSwipeToggle::New4();
    ::g::basic::LabelText* temp98 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp99 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp100 = ::g::Fuse::Controls::Grid::New4();
    missa_asuntola = ::g::BasicSwipeToggle::New4();
    ::g::basic::LabelText* temp101 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp102 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp103 = ::g::Fuse::Controls::Grid::New4();
    missa_liikuntasali = ::g::BasicSwipeToggle::New4();
    ::g::basic::LabelText* temp104 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp105 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp106 = ::g::Fuse::Controls::Grid::New4();
    missa_oleskelutila = ::g::BasicSwipeToggle::New4();
    ::g::basic::LabelText* temp107 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp108 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp109 = ::g::Fuse::Controls::Grid::New4();
    missa_wc = ::g::BasicSwipeToggle::New4();
    ::g::basic::LabelText* temp110 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp111 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp112 = ::g::Fuse::Controls::Grid::New4();
    missa_kanslia = ::g::BasicSwipeToggle::New4();
    ::g::basic::LabelText* temp113 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp114 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp115 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp116 = ::g::Fuse::Controls::Grid::New4();
    missa_ruokala = ::g::BasicSwipeToggle::New4();
    ::g::basic::LabelText* temp117 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp118 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp119 = ::g::Fuse::Controls::Grid::New4();
    missa_ulkona = ::g::BasicSwipeToggle::New4();
    ::g::basic::LabelText* temp120 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp121 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp122 = ::g::Fuse::Controls::Grid::New4();
    missa_kadulla = ::g::BasicSwipeToggle::New4();
    ::g::basic::LabelText* temp123 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp124 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp125 = ::g::Fuse::Controls::Grid::New4();
    missa_kaytavalla = ::g::BasicSwipeToggle::New4();
    ::g::basic::LabelText* temp126 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp127 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp128 = ::g::Fuse::Controls::Grid::New4();
    missa_toissa = ::g::BasicSwipeToggle::New4();
    ::g::basic::LabelText* temp129 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp130 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp131 = ::g::Fuse::Controls::Grid::New4();
    missa_muualla = ::g::basic::TextBoxAction::New4();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp7);
    ::g::Fuse::Controls::StackPanel* temp132 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp133 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::basic::TitleText* temp134 = ::g::basic::TitleText::New5();
    ::g::Fuse::Controls::StackPanel* temp135 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp136 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp137 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp138 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp139 = ::g::Fuse::Controls::Grid::New4();
    kuka_toinen = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp140 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp141 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp142 = ::g::Fuse::Controls::Grid::New4();
    kuka_vanhempihoitaja = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp143 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp144 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp145 = ::g::Fuse::Controls::Grid::New4();
    kuka_opettaja = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp146 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp147 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp148 = ::g::Fuse::Controls::Grid::New4();
    kuka_koulukuraattori = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp149 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp150 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp151 = ::g::Fuse::Controls::Grid::New4();
    kuka_jokumuu = ::g::basic::TextBoxAction::New4();
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp8);
    ::g::Fuse::Controls::StackPanel* temp152 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp153 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::basic::TitleText* temp154 = ::g::basic::TitleText::New5();
    ::g::Fuse::Controls::StackPanel* temp155 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp156 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp157 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp158 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp159 = ::g::Fuse::Controls::Grid::New4();
    mitateit_loin = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp160 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp161 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp162 = ::g::Fuse::Controls::Grid::New4();
    mitateit_juoksin = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp163 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp164 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp165 = ::g::Fuse::Controls::Grid::New4();
    mitateit_huusin = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp166 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp167 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp168 = ::g::Fuse::Controls::Grid::New4();
    mitateit_itkin = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp169 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp170 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp171 = ::g::Fuse::Controls::Grid::New4();
    mitateit_kavelinpois = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp172 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp173 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp174 = ::g::Fuse::Controls::Grid::New4();
    mitateit_rikoinjotain = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp175 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp176 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp177 = ::g::Fuse::Controls::Grid::New4();
    mitateit_kerroinaiku = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp178 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp179 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp180 = ::g::Fuse::Controls::Grid::New4();
    mitateit_kerroinkave = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp181 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp182 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp183 = ::g::Fuse::Controls::Grid::New4();
    mitateit_envalittanut = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp184 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp185 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp186 = ::g::Fuse::Controls::Grid::New4();
    mitateit_hoidinasianpuhumalla = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp187 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp188 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp189 = ::g::Fuse::Controls::Grid::New4();
    mitateit_vihanhallinanmenetelma = ::g::basic::TextBoxAction::New4();
    temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp9);
    ::g::Fuse::Controls::StackPanel* temp190 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp191 = ::g::Fuse::Controls::Grid::New4();
    mitateit_sosiaalinentaito = ::g::basic::TextBoxAction::New4();
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp10);
    ::g::Fuse::Controls::StackPanel* temp192 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp193 = ::g::Fuse::Controls::Grid::New4();
    mitateit_jotainmuuta = ::g::basic::TextBoxAction::New4();
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp11);
    ::g::Fuse::Controls::StackPanel* temp194 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp195 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::basic::TitleText* temp196 = ::g::basic::TitleText::New5();
    ::g::Fuse::Controls::StackPanel* temp197 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp198 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp199 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp200 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp201 = ::g::Fuse::Controls::Grid::New4();
    viha_kihisinraivosta = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp202 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp203 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp204 = ::g::Fuse::Controls::Grid::New4();
    viha_todellavihainen = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp205 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp206 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp207 = ::g::Fuse::Controls::Grid::New4();
    viha_melkovihainen = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp208 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp209 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp210 = ::g::Fuse::Controls::Grid::New4();
    viha_lievaviha = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp211 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp212 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp213 = ::g::Fuse::Controls::Grid::New4();
    viha_enlainkaan = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp214 = ::g::basic::LabelText::New5();
    ::g::Fuse::Reactive::DataBinding* temp215 = ::g::Fuse::Reactive::DataBinding::New1(temp1_X_inst, (uObject*)temp20, 3);
    ::g::Fuse::Controls::StackPanel* temp216 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp217 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::basic::TitleText* temp218 = ::g::basic::TitleText::New5();
    ::g::Fuse::Controls::StackPanel* temp219 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp220 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp221 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp222 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp223 = ::g::Fuse::Controls::Grid::New4();
    hallinta_1 = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp224 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp225 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp226 = ::g::Fuse::Controls::Grid::New4();
    hallinta_2 = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp227 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp228 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp229 = ::g::Fuse::Controls::Grid::New4();
    hallinta_3 = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp230 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp231 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp232 = ::g::Fuse::Controls::Grid::New4();
    hallinta_4 = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp233 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::StackPanel* temp234 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp235 = ::g::Fuse::Controls::Grid::New4();
    hallinta_5 = ::g::BasicSwipeToggleBig::New4();
    ::g::basic::LabelText* temp236 = ::g::basic::LabelText::New5();
    ::g::Fuse::Reactive::DataBinding* temp237 = ::g::Fuse::Reactive::DataBinding::New1(temp2_X_inst, (uObject*)temp29, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp238 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5490196f, 0.5372549f, 0.6901961f, 0.6980392f));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp30->LineNumber(3);
    temp30->FileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp30->SourceLineNumber(3);
    temp30->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp30->File(::g::Uno::UX::BundleFileSource::New1(::g::Haslaamispaivakirja_bundle::FirstPage32a714a7()));
    temp31->StretchMode(1);
    temp31->Layer(1);
    temp31->SourceLineNumber(5);
    temp31->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp31->File(::g::Uno::UX::BundleFileSource::New1(::g::Haslaamispaivakirja_bundle::vuoristomaisema84f6fc28()));
    temp31->Background(temp32);
    temp33->SourceLineNumber(7);
    temp33->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    temp34->ColumnCount(3);
    temp34->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 15.0f));
    temp34->Padding(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    temp34->SourceLineNumber(8);
    temp34->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp34, 2);
    temp34->Background(temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    temp35->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp35->SourceLineNumber(9);
    temp35->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    temp36->SourceLineNumber(10);
    temp36->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp36, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp37->FontSize(18.0f);
    temp37->TextAlignment(0);
    temp37->Color(::g::Fuse::Drawing::Colors::White());
    temp37->Alignment(0);
    temp37->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 5.0f, 5.0f));
    temp37->Opacity(1.0f);
    temp37->SourceLineNumber(11);
    temp37->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp3->SourceLineNumber(10);
    temp3->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp38->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp38->SourceLineNumber(14);
    temp38->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp39->Value(::STRINGS[72/*"The Mood"*/]);
    temp39->FontSize(20.0f);
    temp39->TextAlignment(1);
    temp39->Alignment(0);
    temp39->Margin(::g::Uno::Float4__New2(0.0f, 4.0f, 0.0f, 0.0f));
    temp39->SourceLineNumber(15);
    temp39->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp->TextWrapping(0);
    temp->FontSize(10.0f);
    temp->TextAlignment(1);
    temp->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.4f));
    temp->Alignment(10);
    temp->SourceLineNumber(16);
    temp->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp40);
    temp4->SourceLineNumber(16);
    temp4->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp41->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp41->SourceLineNumber(18);
    temp41->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    temp42->SourceLineNumber(19);
    temp42->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    temp43->FontSize(18.0f);
    temp43->TextAlignment(2);
    temp43->Color(::g::Fuse::Drawing::Colors::White());
    temp43->Alignment(0);
    temp43->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 10.0f, 5.0f));
    temp43->Opacity(1.0f);
    temp43->SourceLineNumber(20);
    temp43->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Stops()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Stops()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp46);
    temp45->Offset(0.0f);
    temp45->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3490196f));
    temp46->Offset(1.0f);
    temp46->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp47->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp47->SourceLineNumber(39);
    temp47->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp47->Background(temp238);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    temp48->Margin(::g::Uno::Float4__New2(15.0f, 60.0f, 15.0f, 0.0f));
    temp48->SourceLineNumber(41);
    temp48->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp75);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp90);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp132);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp152);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp194);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp216);
    temp49->Text(::STRINGS[73/*"Katso vanhat"*/]);
    temp49->SourceLineNumber(43);
    temp49->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp49, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp5->SourceLineNumber(43);
    temp5->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp50->Value(::STRINGS[74/*"Millä tuule...*/]);
    temp50->TextAlignment(0);
    temp50->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp50->SourceLineNumber(45);
    temp50->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp51->Value(::STRINGS[75/*"Kerro hiema...*/]);
    temp51->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 30.0f));
    temp51->SourceLineNumber(46);
    temp51->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp52->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 30.0f));
    temp52->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp52->SourceLineNumber(48);
    temp52->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    temp53->SourceLineNumber(49);
    temp53->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    temp54->Value(::STRINGS[76/*"Mitä tapaht...*/]);
    temp54->SourceLineNumber(50);
    temp54->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp55->SourceLineNumber(53);
    temp55->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    temp56->ColumnCount(1);
    temp56->SourceLineNumber(54);
    temp56->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    temp57->SourceLineNumber(55);
    temp57->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp73);
    temp58->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp58->SourceLineNumber(56);
    temp58->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    temp59->ColumnCount(4);
    temp59->SourceLineNumber(57);
    temp59->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), mita_kiusaus);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    uPtr(mita_kiusaus)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mita_kiusaus)->Name(FirstPage::__selector2_);
    uPtr(mita_kiusaus)->SourceLineNumber(58);
    uPtr(mita_kiusaus)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp60->Value(::STRINGS[77/*"Joku kiusas...*/]);
    temp60->TextWrapping(1);
    temp60->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp60->SourceLineNumber(59);
    temp60->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp60, 3);
    temp61->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp61->SourceLineNumber(62);
    temp61->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    temp62->ColumnCount(4);
    temp62->SourceLineNumber(63);
    temp62->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), mita_varkaus);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    uPtr(mita_varkaus)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mita_varkaus)->Name(FirstPage::__selector3_);
    uPtr(mita_varkaus)->SourceLineNumber(64);
    uPtr(mita_varkaus)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp63->Value(::STRINGS[78/*"Joku otti j...*/]);
    temp63->TextWrapping(1);
    temp63->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp63->SourceLineNumber(65);
    temp63->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp63, 3);
    temp64->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp64->SourceLineNumber(68);
    temp64->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    temp65->ColumnCount(4);
    temp65->SourceLineNumber(69);
    temp65->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), mita_inho);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp66);
    uPtr(mita_inho)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mita_inho)->Name(FirstPage::__selector4_);
    uPtr(mita_inho)->SourceLineNumber(70);
    uPtr(mita_inho)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp66->Value(::STRINGS[79/*"Joku teki j...*/]);
    temp66->TextWrapping(1);
    temp66->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp66->SourceLineNumber(71);
    temp66->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp66, 3);
    temp67->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp67->SourceLineNumber(74);
    temp67->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    temp68->ColumnCount(4);
    temp68->SourceLineNumber(75);
    temp68->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), mita_teinvaarin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp69);
    uPtr(mita_teinvaarin)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mita_teinvaarin)->Name(FirstPage::__selector5_);
    uPtr(mita_teinvaarin)->SourceLineNumber(76);
    uPtr(mita_teinvaarin)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp69->Value(::STRINGS[80/*"Tein jotain...*/]);
    temp69->TextWrapping(1);
    temp69->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp69->SourceLineNumber(77);
    temp69->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp69, 3);
    temp70->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp70->SourceLineNumber(80);
    temp70->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp71);
    temp71->ColumnCount(4);
    temp71->SourceLineNumber(81);
    temp71->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp71->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), mita_riitely);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp71->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp72);
    uPtr(mita_riitely)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mita_riitely)->Name(FirstPage::__selector6_);
    uPtr(mita_riitely)->SourceLineNumber(82);
    uPtr(mita_riitely)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp72->Value(::STRINGS[81/*"Joku alkoi ...*/]);
    temp72->TextWrapping(1);
    temp72->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp72->SourceLineNumber(83);
    temp72->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp72, 3);
    temp73->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp73->SourceLineNumber(86);
    temp73->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp73->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp74);
    temp74->ColumnCount(1);
    temp74->SourceLineNumber(87);
    temp74->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), mita_muuta);
    uPtr(mita_muuta)->PlaceholderText(::STRINGS[82/*"Muuta"*/]);
    uPtr(mita_muuta)->PlaceholderColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.6980392f));
    uPtr(mita_muuta)->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    uPtr(mita_muuta)->Name(FirstPage::__selector7_);
    uPtr(mita_muuta)->SourceLineNumber(88);
    uPtr(mita_muuta)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    uPtr(mita_muuta)->add_ValueChanged(uDelegate::New(::TYPES[5/*Uno.UX.ValueChangedHandler<string>*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mita_muuta)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    temp6->SourceLineNumber(88);
    temp6->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp75->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 30.0f));
    temp75->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp75->SourceLineNumber(97);
    temp75->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp78);
    temp76->SourceLineNumber(98);
    temp76->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp76->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp77);
    temp77->Value(::STRINGS[83/*"Milloin?"*/]);
    temp77->SourceLineNumber(99);
    temp77->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp78->SourceLineNumber(102);
    temp78->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp79);
    temp79->ColumnCount(1);
    temp79->SourceLineNumber(103);
    temp79->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp79->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp80);
    temp80->SourceLineNumber(104);
    temp80->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp80->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp81);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp80->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp80->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp87);
    temp81->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp81->SourceLineNumber(105);
    temp81->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp82);
    temp82->ColumnCount(4);
    temp82->SourceLineNumber(106);
    temp82->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp82->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), milloin_aamu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp82->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp83);
    uPtr(milloin_aamu)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(milloin_aamu)->Name(FirstPage::__selector8_);
    uPtr(milloin_aamu)->SourceLineNumber(107);
    uPtr(milloin_aamu)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp83->Value(::STRINGS[84/*"Aamu"*/]);
    temp83->TextWrapping(1);
    temp83->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp83->SourceLineNumber(108);
    temp83->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp83, 3);
    temp84->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp84->SourceLineNumber(111);
    temp84->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp84->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp85);
    temp85->ColumnCount(4);
    temp85->SourceLineNumber(112);
    temp85->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), milloin_iltapaiva);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp86);
    uPtr(milloin_iltapaiva)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(milloin_iltapaiva)->Name(FirstPage::__selector9_);
    uPtr(milloin_iltapaiva)->SourceLineNumber(113);
    uPtr(milloin_iltapaiva)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp86->Value(::STRINGS[85/*"Iltapäivä"*/]);
    temp86->TextWrapping(1);
    temp86->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp86->SourceLineNumber(114);
    temp86->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp86, 3);
    temp87->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp87->SourceLineNumber(117);
    temp87->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp87->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp88);
    temp88->ColumnCount(4);
    temp88->SourceLineNumber(118);
    temp88->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), milloin_ilta);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp89);
    uPtr(milloin_ilta)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(milloin_ilta)->Name(FirstPage::__selector10_);
    uPtr(milloin_ilta)->SourceLineNumber(119);
    uPtr(milloin_ilta)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp89->Value(::STRINGS[86/*"Ilta"*/]);
    temp89->TextWrapping(1);
    temp89->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp89->SourceLineNumber(120);
    temp89->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp89, 3);
    temp90->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 30.0f));
    temp90->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp90->SourceLineNumber(128);
    temp90->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp90->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp91);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp90->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp93);
    temp91->SourceLineNumber(129);
    temp91->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp91->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp92);
    temp92->Value(::STRINGS[87/*"Missä olit?"*/]);
    temp92->SourceLineNumber(130);
    temp92->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp93->SourceLineNumber(133);
    temp93->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp94);
    temp94->ColumnCount(2);
    temp94->SourceLineNumber(134);
    temp94->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp94->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp95);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp94->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp114);
    temp95->SourceLineNumber(135);
    temp95->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp95->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp96);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp95->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp99);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp95->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp102);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp95->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp105);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp95->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp108);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp95->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp111);
    temp96->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp96->SourceLineNumber(136);
    temp96->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp96->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp97);
    temp97->ColumnCount(3);
    temp97->SourceLineNumber(137);
    temp97->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp97->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_koulu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp97->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp98);
    uPtr(missa_koulu)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_koulu)->Name(FirstPage::__selector11_);
    uPtr(missa_koulu)->SourceLineNumber(138);
    uPtr(missa_koulu)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp98->Value(::STRINGS[88/*"Luokassa/ko...*/]);
    temp98->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp98->SourceLineNumber(139);
    temp98->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp98, 2);
    temp99->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp99->SourceLineNumber(142);
    temp99->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp99->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp100);
    temp100->ColumnCount(3);
    temp100->SourceLineNumber(143);
    temp100->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_asuntola);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp101);
    uPtr(missa_asuntola)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_asuntola)->Name(FirstPage::__selector12_);
    uPtr(missa_asuntola)->SourceLineNumber(144);
    uPtr(missa_asuntola)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp101->Value(::STRINGS[89/*"Asuntolassa"*/]);
    temp101->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp101->SourceLineNumber(145);
    temp101->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp101, 2);
    temp102->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp102->SourceLineNumber(148);
    temp102->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp102->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp103);
    temp103->ColumnCount(3);
    temp103->SourceLineNumber(149);
    temp103->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp103->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_liikuntasali);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp103->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp104);
    uPtr(missa_liikuntasali)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_liikuntasali)->Name(FirstPage::__selector13_);
    uPtr(missa_liikuntasali)->SourceLineNumber(150);
    uPtr(missa_liikuntasali)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp104->Value(::STRINGS[90/*"Liikuntasal...*/]);
    temp104->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp104->SourceLineNumber(151);
    temp104->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp104, 2);
    temp105->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp105->SourceLineNumber(154);
    temp105->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp105->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp106);
    temp106->ColumnCount(3);
    temp106->SourceLineNumber(155);
    temp106->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp106->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_oleskelutila);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp106->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp107);
    uPtr(missa_oleskelutila)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_oleskelutila)->Name(FirstPage::__selector14_);
    uPtr(missa_oleskelutila)->SourceLineNumber(156);
    uPtr(missa_oleskelutila)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp107->Value(::STRINGS[91/*"Oleskelutil...*/]);
    temp107->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp107->SourceLineNumber(157);
    temp107->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp107, 2);
    temp108->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp108->SourceLineNumber(160);
    temp108->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp108->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp109);
    temp109->ColumnCount(3);
    temp109->SourceLineNumber(161);
    temp109->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp109->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_wc);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp109->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp110);
    uPtr(missa_wc)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_wc)->Name(FirstPage::__selector15_);
    uPtr(missa_wc)->SourceLineNumber(162);
    uPtr(missa_wc)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp110->Value(::STRINGS[92/*"WC:ssä"*/]);
    temp110->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp110->SourceLineNumber(163);
    temp110->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp110, 2);
    temp111->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp111->SourceLineNumber(166);
    temp111->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp111->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp112);
    temp112->ColumnCount(3);
    temp112->SourceLineNumber(167);
    temp112->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_kanslia);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp113);
    uPtr(missa_kanslia)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_kanslia)->Name(FirstPage::__selector16_);
    uPtr(missa_kanslia)->SourceLineNumber(168);
    uPtr(missa_kanslia)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp113->Value(::STRINGS[93/*"Kansliassa"*/]);
    temp113->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp113->SourceLineNumber(169);
    temp113->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp113, 2);
    temp114->SourceLineNumber(174);
    temp114->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp115);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp118);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp121);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp124);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp127);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp130);
    temp115->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp115->SourceLineNumber(175);
    temp115->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp115->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp116);
    temp116->ColumnCount(3);
    temp116->SourceLineNumber(176);
    temp116->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp116->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_ruokala);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp116->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp117);
    uPtr(missa_ruokala)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_ruokala)->Name(FirstPage::__selector17_);
    uPtr(missa_ruokala)->SourceLineNumber(177);
    uPtr(missa_ruokala)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp117->Value(::STRINGS[94/*"Ruokalassa"*/]);
    temp117->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp117->SourceLineNumber(178);
    temp117->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp117, 2);
    temp118->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp118->SourceLineNumber(181);
    temp118->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp118->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp119);
    temp119->ColumnCount(3);
    temp119->SourceLineNumber(182);
    temp119->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp119->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_ulkona);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp119->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp120);
    uPtr(missa_ulkona)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_ulkona)->Name(FirstPage::__selector18_);
    uPtr(missa_ulkona)->SourceLineNumber(183);
    uPtr(missa_ulkona)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp120->Value(::STRINGS[95/*"Ulkona/piha...*/]);
    temp120->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp120->SourceLineNumber(184);
    temp120->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp120, 2);
    temp121->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp121->SourceLineNumber(187);
    temp121->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp121->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp122);
    temp122->ColumnCount(3);
    temp122->SourceLineNumber(188);
    temp122->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp122->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_kadulla);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp122->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp123);
    uPtr(missa_kadulla)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_kadulla)->Name(FirstPage::__selector19_);
    uPtr(missa_kadulla)->SourceLineNumber(189);
    uPtr(missa_kadulla)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp123->Value(::STRINGS[96/*"Kadulla"*/]);
    temp123->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp123->SourceLineNumber(190);
    temp123->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp123, 2);
    temp124->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp124->SourceLineNumber(193);
    temp124->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp124->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp125);
    temp125->ColumnCount(3);
    temp125->SourceLineNumber(194);
    temp125->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp125->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_kaytavalla);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp125->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp126);
    uPtr(missa_kaytavalla)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_kaytavalla)->Name(FirstPage::__selector20_);
    uPtr(missa_kaytavalla)->SourceLineNumber(195);
    uPtr(missa_kaytavalla)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp126->Value(::STRINGS[97/*"Käytävällä"*/]);
    temp126->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp126->SourceLineNumber(196);
    temp126->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp126, 2);
    temp127->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp127->SourceLineNumber(199);
    temp127->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp127->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp128);
    temp128->ColumnCount(3);
    temp128->SourceLineNumber(200);
    temp128->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp128->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_toissa);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp128->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp129);
    uPtr(missa_toissa)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(missa_toissa)->Name(FirstPage::__selector21_);
    uPtr(missa_toissa)->SourceLineNumber(201);
    uPtr(missa_toissa)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp129->Value(::STRINGS[98/*"Töissä"*/]);
    temp129->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp129->SourceLineNumber(202);
    temp129->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp129, 2);
    temp130->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp130->SourceLineNumber(205);
    temp130->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp130->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp131);
    temp131->ColumnCount(1);
    temp131->SourceLineNumber(206);
    temp131->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp131->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), missa_muualla);
    uPtr(missa_muualla)->PlaceholderText(::STRINGS[99/*"Muualla, mi...*/]);
    uPtr(missa_muualla)->PlaceholderColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.6980392f));
    uPtr(missa_muualla)->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    uPtr(missa_muualla)->Name(FirstPage::__selector22_);
    uPtr(missa_muualla)->SourceLineNumber(207);
    uPtr(missa_muualla)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    uPtr(missa_muualla)->add_ValueChanged(uDelegate::New(::TYPES[5/*Uno.UX.ValueChangedHandler<string>*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(missa_muualla)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    temp7->SourceLineNumber(207);
    temp7->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp132->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 30.0f));
    temp132->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp132->SourceLineNumber(215);
    temp132->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp132->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp133);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp132->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp135);
    temp133->SourceLineNumber(216);
    temp133->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp133->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp134);
    temp134->Value(::STRINGS[100/*"Kuka tuo to...*/]);
    temp134->SourceLineNumber(217);
    temp134->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp135->SourceLineNumber(220);
    temp135->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp135->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp136);
    temp136->ColumnCount(1);
    temp136->SourceLineNumber(221);
    temp136->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp136->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp137);
    temp137->SourceLineNumber(222);
    temp137->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp137->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp138);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp137->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp141);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp137->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp144);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp137->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp147);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp137->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp150);
    temp138->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp138->SourceLineNumber(223);
    temp138->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp138->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp139);
    temp139->ColumnCount(4);
    temp139->SourceLineNumber(224);
    temp139->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), kuka_toinen);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp140);
    uPtr(kuka_toinen)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(kuka_toinen)->Name(FirstPage::__selector23_);
    uPtr(kuka_toinen)->SourceLineNumber(225);
    uPtr(kuka_toinen)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp140->Value(::STRINGS[101/*"Toinen nuori"*/]);
    temp140->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp140->SourceLineNumber(226);
    temp140->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp140, 3);
    temp141->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp141->SourceLineNumber(229);
    temp141->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp141->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp142);
    temp142->ColumnCount(4);
    temp142->SourceLineNumber(230);
    temp142->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp142->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), kuka_vanhempihoitaja);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp142->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp143);
    uPtr(kuka_vanhempihoitaja)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(kuka_vanhempihoitaja)->Name(FirstPage::__selector24_);
    uPtr(kuka_vanhempihoitaja)->SourceLineNumber(231);
    uPtr(kuka_vanhempihoitaja)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp143->Value(::STRINGS[102/*"Vanhempi / ...*/]);
    temp143->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp143->SourceLineNumber(232);
    temp143->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp143, 3);
    temp144->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp144->SourceLineNumber(235);
    temp144->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp144->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp145);
    temp145->ColumnCount(4);
    temp145->SourceLineNumber(236);
    temp145->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp145->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), kuka_opettaja);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp145->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp146);
    uPtr(kuka_opettaja)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(kuka_opettaja)->Name(FirstPage::__selector25_);
    uPtr(kuka_opettaja)->SourceLineNumber(237);
    uPtr(kuka_opettaja)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp146->Value(::STRINGS[103/*"Opettaja"*/]);
    temp146->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp146->SourceLineNumber(238);
    temp146->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp146, 3);
    temp147->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp147->SourceLineNumber(241);
    temp147->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp147->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp148);
    temp148->ColumnCount(4);
    temp148->SourceLineNumber(242);
    temp148->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp148->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), kuka_koulukuraattori);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp148->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp149);
    uPtr(kuka_koulukuraattori)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(kuka_koulukuraattori)->Name(FirstPage::__selector26_);
    uPtr(kuka_koulukuraattori)->SourceLineNumber(243);
    uPtr(kuka_koulukuraattori)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp149->Value(::STRINGS[104/*"Koulukuraat...*/]);
    temp149->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp149->SourceLineNumber(244);
    temp149->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp149, 3);
    temp150->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp150->SourceLineNumber(247);
    temp150->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp150->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp151);
    temp151->ColumnCount(1);
    temp151->SourceLineNumber(248);
    temp151->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp151->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), kuka_jokumuu);
    uPtr(kuka_jokumuu)->PlaceholderText(::STRINGS[105/*"Joku muu"*/]);
    uPtr(kuka_jokumuu)->PlaceholderColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.6980392f));
    uPtr(kuka_jokumuu)->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    uPtr(kuka_jokumuu)->Name(FirstPage::__selector27_);
    uPtr(kuka_jokumuu)->SourceLineNumber(249);
    uPtr(kuka_jokumuu)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    uPtr(kuka_jokumuu)->add_ValueChanged(uDelegate::New(::TYPES[5/*Uno.UX.ValueChangedHandler<string>*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(kuka_jokumuu)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb4);
    temp8->SourceLineNumber(249);
    temp8->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp152->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 30.0f));
    temp152->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp152->SourceLineNumber(257);
    temp152->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp152->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp153);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp152->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp155);
    temp153->SourceLineNumber(258);
    temp153->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp153->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp154);
    temp154->Value(::STRINGS[106/*"Mitä teit?"*/]);
    temp154->SourceLineNumber(259);
    temp154->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp155->SourceLineNumber(262);
    temp155->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp155->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp156);
    temp156->ColumnCount(1);
    temp156->SourceLineNumber(263);
    temp156->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp156->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp157);
    temp157->SourceLineNumber(264);
    temp157->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp158);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp161);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp164);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp167);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp170);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp173);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp176);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp179);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp182);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp185);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp188);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp190);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp192);
    temp158->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp158->SourceLineNumber(265);
    temp158->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp158->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp159);
    temp159->ColumnCount(4);
    temp159->SourceLineNumber(266);
    temp159->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp159->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_loin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp159->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp160);
    uPtr(mitateit_loin)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_loin)->Name(FirstPage::__selector28_);
    uPtr(mitateit_loin)->SourceLineNumber(267);
    uPtr(mitateit_loin)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp160->Value(::STRINGS[107/*"Löin takaisin"*/]);
    temp160->TextWrapping(1);
    temp160->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp160->SourceLineNumber(268);
    temp160->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp160, 3);
    temp161->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp161->SourceLineNumber(271);
    temp161->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp161->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp162);
    temp162->ColumnCount(4);
    temp162->SourceLineNumber(272);
    temp162->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp162->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_juoksin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp162->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp163);
    uPtr(mitateit_juoksin)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_juoksin)->Name(FirstPage::__selector29_);
    uPtr(mitateit_juoksin)->SourceLineNumber(273);
    uPtr(mitateit_juoksin)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp163->Value(::STRINGS[108/*"Juoksin pois"*/]);
    temp163->TextWrapping(1);
    temp163->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp163->SourceLineNumber(274);
    temp163->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp163, 3);
    temp164->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp164->SourceLineNumber(277);
    temp164->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp164->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp165);
    temp165->ColumnCount(4);
    temp165->SourceLineNumber(278);
    temp165->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp165->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_huusin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp165->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp166);
    uPtr(mitateit_huusin)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_huusin)->Name(FirstPage::__selector30_);
    uPtr(mitateit_huusin)->SourceLineNumber(279);
    uPtr(mitateit_huusin)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp166->Value(::STRINGS[109/*"Huusin"*/]);
    temp166->TextWrapping(1);
    temp166->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp166->SourceLineNumber(280);
    temp166->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp166, 3);
    temp167->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp167->SourceLineNumber(283);
    temp167->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp167->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp168);
    temp168->ColumnCount(4);
    temp168->SourceLineNumber(284);
    temp168->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp168->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_itkin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp168->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp169);
    uPtr(mitateit_itkin)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_itkin)->Name(FirstPage::__selector31_);
    uPtr(mitateit_itkin)->SourceLineNumber(285);
    uPtr(mitateit_itkin)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp169->Value(::STRINGS[110/*"Itkin"*/]);
    temp169->TextWrapping(1);
    temp169->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp169->SourceLineNumber(286);
    temp169->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp169, 3);
    temp170->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp170->SourceLineNumber(289);
    temp170->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp170->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp171);
    temp171->ColumnCount(4);
    temp171->SourceLineNumber(290);
    temp171->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp171->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_kavelinpois);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp171->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp172);
    uPtr(mitateit_kavelinpois)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_kavelinpois)->Name(FirstPage::__selector32_);
    uPtr(mitateit_kavelinpois)->SourceLineNumber(291);
    uPtr(mitateit_kavelinpois)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp172->Value(::STRINGS[111/*"Kävelin poi...*/]);
    temp172->TextWrapping(1);
    temp172->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp172->SourceLineNumber(292);
    temp172->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp172, 3);
    temp173->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp173->SourceLineNumber(295);
    temp173->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp173->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp174);
    temp174->ColumnCount(4);
    temp174->SourceLineNumber(296);
    temp174->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp174->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_rikoinjotain);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp174->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp175);
    uPtr(mitateit_rikoinjotain)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_rikoinjotain)->Name(FirstPage::__selector33_);
    uPtr(mitateit_rikoinjotain)->SourceLineNumber(297);
    uPtr(mitateit_rikoinjotain)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp175->Value(::STRINGS[112/*"Rikoin jotain"*/]);
    temp175->TextWrapping(1);
    temp175->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp175->SourceLineNumber(298);
    temp175->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp175, 3);
    temp176->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp176->SourceLineNumber(301);
    temp176->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp176->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp177);
    temp177->ColumnCount(4);
    temp177->SourceLineNumber(302);
    temp177->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp177->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_kerroinaiku);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp177->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp178);
    uPtr(mitateit_kerroinaiku)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_kerroinaiku)->Name(FirstPage::__selector34_);
    uPtr(mitateit_kerroinaiku)->SourceLineNumber(303);
    uPtr(mitateit_kerroinaiku)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp178->Value(::STRINGS[113/*"Kerroin aik...*/]);
    temp178->TextWrapping(1);
    temp178->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp178->SourceLineNumber(304);
    temp178->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp178, 3);
    temp179->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp179->SourceLineNumber(307);
    temp179->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp179->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp180);
    temp180->ColumnCount(4);
    temp180->SourceLineNumber(308);
    temp180->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp180->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_kerroinkave);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp180->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp181);
    uPtr(mitateit_kerroinkave)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_kerroinkave)->Name(FirstPage::__selector35_);
    uPtr(mitateit_kerroinkave)->SourceLineNumber(309);
    uPtr(mitateit_kerroinkave)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp181->Value(::STRINGS[114/*"Kerroin kav...*/]);
    temp181->TextWrapping(1);
    temp181->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp181->SourceLineNumber(310);
    temp181->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp181, 3);
    temp182->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp182->SourceLineNumber(313);
    temp182->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp182->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp183);
    temp183->ColumnCount(4);
    temp183->SourceLineNumber(314);
    temp183->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp183->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_envalittanut);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp183->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp184);
    uPtr(mitateit_envalittanut)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_envalittanut)->Name(FirstPage::__selector36_);
    uPtr(mitateit_envalittanut)->SourceLineNumber(315);
    uPtr(mitateit_envalittanut)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp184->Value(::STRINGS[115/*"En välittän...*/]);
    temp184->TextWrapping(1);
    temp184->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp184->SourceLineNumber(316);
    temp184->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp184, 3);
    temp185->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp185->SourceLineNumber(319);
    temp185->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp185->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp186);
    temp186->ColumnCount(4);
    temp186->SourceLineNumber(320);
    temp186->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp186->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_hoidinasianpuhumalla);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp186->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp187);
    uPtr(mitateit_hoidinasianpuhumalla)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(mitateit_hoidinasianpuhumalla)->Name(FirstPage::__selector37_);
    uPtr(mitateit_hoidinasianpuhumalla)->SourceLineNumber(321);
    uPtr(mitateit_hoidinasianpuhumalla)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp187->Value(::STRINGS[116/*"Hoidin asia...*/]);
    temp187->TextWrapping(1);
    temp187->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp187->SourceLineNumber(322);
    temp187->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp187, 3);
    temp188->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp188->SourceLineNumber(325);
    temp188->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp188->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp189);
    temp189->ColumnCount(1);
    temp189->SourceLineNumber(326);
    temp189->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp189->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_vihanhallinanmenetelma);
    uPtr(mitateit_vihanhallinanmenetelma)->PlaceholderText(::STRINGS[117/*"Käytin viha...*/]);
    uPtr(mitateit_vihanhallinanmenetelma)->PlaceholderColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.6980392f));
    uPtr(mitateit_vihanhallinanmenetelma)->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    uPtr(mitateit_vihanhallinanmenetelma)->Name(FirstPage::__selector38_);
    uPtr(mitateit_vihanhallinanmenetelma)->SourceLineNumber(327);
    uPtr(mitateit_vihanhallinanmenetelma)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    uPtr(mitateit_vihanhallinanmenetelma)->add_ValueChanged(uDelegate::New(::TYPES[5/*Uno.UX.ValueChangedHandler<string>*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb5)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mitateit_vihanhallinanmenetelma)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb5);
    temp9->SourceLineNumber(327);
    temp9->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp190->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp190->SourceLineNumber(330);
    temp190->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp190->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp191);
    temp191->ColumnCount(1);
    temp191->SourceLineNumber(331);
    temp191->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp191->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_sosiaalinentaito);
    uPtr(mitateit_sosiaalinentaito)->PlaceholderText(::STRINGS[118/*"Käytin sosi...*/]);
    uPtr(mitateit_sosiaalinentaito)->PlaceholderColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.6980392f));
    uPtr(mitateit_sosiaalinentaito)->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    uPtr(mitateit_sosiaalinentaito)->Name(FirstPage::__selector39_);
    uPtr(mitateit_sosiaalinentaito)->SourceLineNumber(332);
    uPtr(mitateit_sosiaalinentaito)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    uPtr(mitateit_sosiaalinentaito)->add_ValueChanged(uDelegate::New(::TYPES[5/*Uno.UX.ValueChangedHandler<string>*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mitateit_sosiaalinentaito)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb6);
    temp10->SourceLineNumber(332);
    temp10->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp192->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp192->SourceLineNumber(335);
    temp192->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp192->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp193);
    temp193->ColumnCount(1);
    temp193->SourceLineNumber(336);
    temp193->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp193->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), mitateit_jotainmuuta);
    uPtr(mitateit_jotainmuuta)->PlaceholderText(::STRINGS[119/*"Jotain muuta"*/]);
    uPtr(mitateit_jotainmuuta)->PlaceholderColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.6980392f));
    uPtr(mitateit_jotainmuuta)->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    uPtr(mitateit_jotainmuuta)->Name(FirstPage::__selector40_);
    uPtr(mitateit_jotainmuuta)->SourceLineNumber(337);
    uPtr(mitateit_jotainmuuta)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    uPtr(mitateit_jotainmuuta)->add_ValueChanged(uDelegate::New(::TYPES[5/*Uno.UX.ValueChangedHandler<string>*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(mitateit_jotainmuuta)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb7);
    temp11->SourceLineNumber(337);
    temp11->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp194->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 30.0f));
    temp194->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp194->SourceLineNumber(345);
    temp194->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp194->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp195);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp194->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp197);
    temp195->SourceLineNumber(346);
    temp195->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp195->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp196);
    temp196->Value(::STRINGS[120/*"Kuinka viha...*/]);
    temp196->SourceLineNumber(347);
    temp196->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp197->SourceLineNumber(350);
    temp197->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp197->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp198);
    temp198->ColumnCount(1);
    temp198->SourceLineNumber(351);
    temp198->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp198->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp199);
    temp199->SourceLineNumber(352);
    temp199->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp199->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp200);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp199->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp203);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp199->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp206);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp199->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp209);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp199->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp212);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp199->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp199->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), slider_viha);
    temp200->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp200->SourceLineNumber(353);
    temp200->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp200->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp201);
    temp201->ColumnCount(4);
    temp201->SourceLineNumber(354);
    temp201->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp201->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), viha_kihisinraivosta);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp201->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp202);
    uPtr(viha_kihisinraivosta)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(viha_kihisinraivosta)->Name(FirstPage::__selector41_);
    uPtr(viha_kihisinraivosta)->SourceLineNumber(355);
    uPtr(viha_kihisinraivosta)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp202->Value(::STRINGS[121/*"Kihisin rai...*/]);
    temp202->TextWrapping(1);
    temp202->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp202->SourceLineNumber(356);
    temp202->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp202, 3);
    temp203->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp203->SourceLineNumber(359);
    temp203->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp203->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp204);
    temp204->ColumnCount(4);
    temp204->SourceLineNumber(360);
    temp204->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp204->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), viha_todellavihainen);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp204->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp205);
    uPtr(viha_todellavihainen)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(viha_todellavihainen)->Name(FirstPage::__selector42_);
    uPtr(viha_todellavihainen)->SourceLineNumber(361);
    uPtr(viha_todellavihainen)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp205->Value(::STRINGS[122/*"Todella vih...*/]);
    temp205->TextWrapping(1);
    temp205->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp205->SourceLineNumber(362);
    temp205->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp205, 3);
    temp206->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp206->SourceLineNumber(365);
    temp206->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp206->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp207);
    temp207->ColumnCount(4);
    temp207->SourceLineNumber(366);
    temp207->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp207->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), viha_melkovihainen);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp207->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp208);
    uPtr(viha_melkovihainen)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(viha_melkovihainen)->Name(FirstPage::__selector43_);
    uPtr(viha_melkovihainen)->SourceLineNumber(367);
    uPtr(viha_melkovihainen)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp208->Value(::STRINGS[123/*"Melko vihai...*/]);
    temp208->TextWrapping(1);
    temp208->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp208->SourceLineNumber(368);
    temp208->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp208, 3);
    temp209->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp209->SourceLineNumber(371);
    temp209->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp209->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp210);
    temp210->ColumnCount(4);
    temp210->SourceLineNumber(372);
    temp210->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp210->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), viha_lievaviha);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp210->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp211);
    uPtr(viha_lievaviha)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(viha_lievaviha)->Name(FirstPage::__selector44_);
    uPtr(viha_lievaviha)->SourceLineNumber(373);
    uPtr(viha_lievaviha)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp211->Value(::STRINGS[124/*"Lievästi vi...*/]);
    temp211->TextWrapping(1);
    temp211->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp211->SourceLineNumber(374);
    temp211->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp211, 3);
    temp212->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp212->SourceLineNumber(377);
    temp212->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp212->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp213);
    temp213->ColumnCount(4);
    temp213->SourceLineNumber(378);
    temp213->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp213->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), viha_enlainkaan);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp213->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp214);
    uPtr(viha_enlainkaan)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(viha_enlainkaan)->Name(FirstPage::__selector45_);
    uPtr(viha_enlainkaan)->SourceLineNumber(379);
    uPtr(viha_enlainkaan)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp214->Value(::STRINGS[125/*"En lainkaan...*/]);
    temp214->TextWrapping(1);
    temp214->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp214->SourceLineNumber(380);
    temp214->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp214, 3);
    temp1->Width(::g::Uno::UX::Size__New1(32.0f, 1));
    temp1->Height(::g::Uno::UX::Size__New1(32.0f, 1));
    temp1->Alignment(5);
    temp1->SourceLineNumber(383);
    temp1->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp215);
    temp20->SourceLineNumber(383);
    temp20->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp17->SourceLineNumber(383);
    temp17->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp14->SourceLineNumber(383);
    temp14->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp13->SourceLineNumber(383);
    temp13->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp12->SourceLineNumber(383);
    temp12->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp16->SourceLineNumber(383);
    temp16->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp19->SourceLineNumber(383);
    temp19->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    uPtr(slider_viha)->Minimum(-1.0);
    uPtr(slider_viha)->Maximum(1.0);
    uPtr(slider_viha)->Name(FirstPage::__selector46_);
    uPtr(slider_viha)->SourceLineNumber(384);
    uPtr(slider_viha)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp216->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 30.0f));
    temp216->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp216->SourceLineNumber(390);
    temp216->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp216->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp217);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp216->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp219);
    temp217->SourceLineNumber(391);
    temp217->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp217->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp218);
    temp218->Value(::STRINGS[126/*"Kuinka hyvi...*/]);
    temp218->SourceLineNumber(392);
    temp218->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp219->SourceLineNumber(395);
    temp219->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp219->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp220);
    temp220->ColumnCount(1);
    temp220->SourceLineNumber(396);
    temp220->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp220->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp221);
    temp221->SourceLineNumber(397);
    temp221->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp221->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp222);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp221->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp225);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp221->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp228);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp221->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp231);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp221->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp234);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp221->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp221->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), slider_hallinta);
    temp222->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp222->SourceLineNumber(398);
    temp222->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp222->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp223);
    temp223->ColumnCount(4);
    temp223->SourceLineNumber(399);
    temp223->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp223->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), hallinta_1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp223->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp224);
    uPtr(hallinta_1)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(hallinta_1)->Name(FirstPage::__selector47_);
    uPtr(hallinta_1)->SourceLineNumber(400);
    uPtr(hallinta_1)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp224->Value(::STRINGS[127/*"Huonosti"*/]);
    temp224->TextWrapping(1);
    temp224->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp224->SourceLineNumber(401);
    temp224->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp224, 3);
    temp225->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp225->SourceLineNumber(404);
    temp225->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp225->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp226);
    temp226->ColumnCount(4);
    temp226->SourceLineNumber(405);
    temp226->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp226->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), hallinta_2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp226->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp227);
    uPtr(hallinta_2)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(hallinta_2)->Name(FirstPage::__selector48_);
    uPtr(hallinta_2)->SourceLineNumber(406);
    uPtr(hallinta_2)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp227->Value(::STRINGS[128/*"En kovin hy...*/]);
    temp227->TextWrapping(1);
    temp227->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp227->SourceLineNumber(407);
    temp227->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp227, 3);
    temp228->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp228->SourceLineNumber(410);
    temp228->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp228->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp229);
    temp229->ColumnCount(4);
    temp229->SourceLineNumber(411);
    temp229->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp229->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), hallinta_3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp229->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp230);
    uPtr(hallinta_3)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(hallinta_3)->Name(FirstPage::__selector49_);
    uPtr(hallinta_3)->SourceLineNumber(412);
    uPtr(hallinta_3)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp230->Value(::STRINGS[129/*"Melko hyvin"*/]);
    temp230->TextWrapping(1);
    temp230->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp230->SourceLineNumber(413);
    temp230->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp230, 3);
    temp231->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp231->SourceLineNumber(416);
    temp231->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp231->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp232);
    temp232->ColumnCount(4);
    temp232->SourceLineNumber(417);
    temp232->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp232->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), hallinta_4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp232->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp233);
    uPtr(hallinta_4)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(hallinta_4)->Name(FirstPage::__selector50_);
    uPtr(hallinta_4)->SourceLineNumber(418);
    uPtr(hallinta_4)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp233->Value(::STRINGS[130/*"Hyvin"*/]);
    temp233->TextWrapping(1);
    temp233->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp233->SourceLineNumber(419);
    temp233->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp233, 3);
    temp234->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    temp234->SourceLineNumber(422);
    temp234->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp234->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp235);
    temp235->ColumnCount(4);
    temp235->SourceLineNumber(423);
    temp235->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp235->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), hallinta_5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp235->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp236);
    uPtr(hallinta_5)->PrimaryColor(::g::Fuse::Drawing::Colors::White());
    uPtr(hallinta_5)->Name(FirstPage::__selector51_);
    uPtr(hallinta_5)->SourceLineNumber(424);
    uPtr(hallinta_5)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp236->Value(::STRINGS[131/*"Todella hie...*/]);
    temp236->TextWrapping(1);
    temp236->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    temp236->SourceLineNumber(425);
    temp236->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp236, 3);
    temp2->Width(::g::Uno::UX::Size__New1(32.0f, 1));
    temp2->Height(::g::Uno::UX::Size__New1(32.0f, 1));
    temp2->Alignment(5);
    temp2->SourceLineNumber(428);
    temp2->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp237);
    temp29->SourceLineNumber(428);
    temp29->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp26->SourceLineNumber(428);
    temp26->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp23->SourceLineNumber(428);
    temp23->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp22->SourceLineNumber(428);
    temp22->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp21->SourceLineNumber(428);
    temp21->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp25->SourceLineNumber(428);
    temp25->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    temp28->SourceLineNumber(428);
    temp28->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    uPtr(slider_hallinta)->Minimum(-1.0);
    uPtr(slider_hallinta)->Maximum(1.0);
    uPtr(slider_hallinta)->Name(FirstPage::__selector52_);
    uPtr(slider_hallinta)->SourceLineNumber(429);
    uPtr(slider_hallinta)->SourceFileName(::STRINGS[71/*"FirstPage.ux"*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), mita_kiusaus);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), mita_varkaus);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), mita_inho);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), mita_teinvaarin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), mita_riitely);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), mita_muuta);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), milloin_aamu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), milloin_iltapaiva);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), milloin_ilta);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), missa_koulu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), missa_asuntola);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), missa_liikuntasali);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), missa_oleskelutila);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), missa_wc);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), missa_kanslia);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), missa_ruokala);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), missa_ulkona);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), missa_kadulla);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), missa_kaytavalla);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), missa_toissa);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), missa_muualla);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), kuka_toinen);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), kuka_vanhempihoitaja);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), kuka_opettaja);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), kuka_koulukuraattori);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), kuka_jokumuu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), mitateit_loin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), mitateit_juoksin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), mitateit_huusin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), mitateit_itkin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), mitateit_kavelinpois);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), mitateit_rikoinjotain);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), mitateit_kerroinaiku);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), mitateit_kerroinkave);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), mitateit_envalittanut);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), mitateit_hoidinasianpuhumalla);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), mitateit_vihanhallinanmenetelma);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), mitateit_sosiaalinentaito);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), mitateit_jotainmuuta);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), viha_kihisinraivosta);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), viha_todellavihainen);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), viha_melkovihainen);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), viha_lievaviha);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), viha_enlainkaan);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), slider_viha);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), hallinta_1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), hallinta_2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), hallinta_3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), hallinta_4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), hallinta_5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), slider_hallinta);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
}

// public FirstPage New(Fuse.Navigation.Router router) [static] :134
FirstPage* FirstPage::New5(::g::Fuse::Navigation::Router* router1)
{
    FirstPage* obj1 = (FirstPage*)uNew(FirstPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
