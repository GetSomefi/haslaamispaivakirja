[Uno.Compiler.UxGenerated]
public partial class OldEntrysPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_Text_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb7;
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::basicBtn.Button();
            var temp = new global::Fuse.Reactive.Data("openEntry");
            __self_Text_inst = new Haslaamispaivakirja_basicBtnButton_Text_Property(__self, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("key");
            temp_eb7 = new global::Fuse.Reactive.EventBinding(temp);
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.FontSize = 14f;
            __self.SourceLineNumber = 20;
            __self.SourceFileName = "OldEntrysPage.ux";
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb7.OnEvent);
            temp.SourceLineNumber = 20;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 20;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp_eb7);
            __self.Bindings.Add(temp2);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Text";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template1(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self.Value = "Mitä tapahtui?";
            __self.Color = float4(0f, 0f, 0f, 0.6666667f);
            __self.Alignment = Fuse.Elements.Alignment.Center;
            __self.Margin = float4(0f, 5f, 0f, 15f);
            __self.SourceLineNumber = 27;
            __self.SourceFileName = "OldEntrysPage.ux";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template2(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mita_kiusaus");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("mita_kiusaus_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 28;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 28;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 28;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template3: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template3(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template3()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mita_varkaus");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("mita_varkaus_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 29;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 29;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 29;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template4: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template4(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template4()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mita_inho");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("mita_inho_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 30;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 30;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 30;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template5: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template5(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template5()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mita_teinvaarin");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("mita_teinvaarin_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 31;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 31;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 31;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template6: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template6(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template6()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mita_riitely");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("mita_riitely_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 32;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 32;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 32;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template7: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template7(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template7()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mita_muuta");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("mita_muuta_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 33;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 33;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 33;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template8: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template8(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template8()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self.Value = "Milloin?";
            __self.Color = float4(0f, 0f, 0f, 0.6666667f);
            __self.Alignment = Fuse.Elements.Alignment.Center;
            __self.Margin = float4(0f, 5f, 0f, 15f);
            __self.SourceLineNumber = 35;
            __self.SourceFileName = "OldEntrysPage.ux";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template9: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template9(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template9()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("milloin_aamu");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("milloin_aamu_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 36;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 36;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 36;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template10: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template10(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template10()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("milloin_iltapaiva");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("milloin_iltapaiva_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 37;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 37;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 37;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template11: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template11(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template11()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("milloin_ilta");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("milloin_ilta_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 38;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 38;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 38;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template12: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template12(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template12()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self.Value = "Missä olit?";
            __self.Color = float4(0f, 0f, 0f, 0.6666667f);
            __self.Alignment = Fuse.Elements.Alignment.Center;
            __self.Margin = float4(0f, 5f, 0f, 15f);
            __self.SourceLineNumber = 40;
            __self.SourceFileName = "OldEntrysPage.ux";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template13: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template13(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template13()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("missa_koulu");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("missa_koulu_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 41;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 41;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 41;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template14: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template14(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template14()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("missa_asuntola");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("missa_asuntola_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 42;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 42;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 42;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template15: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template15(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template15()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("missa_liikuntasali");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("missa_liikuntasali_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 43;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 43;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 43;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template16: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template16(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template16()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("missa_oleskelutila");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("missa_oleskelutila_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 44;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 44;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 44;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template17: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template17(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template17()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("missa_wc");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("missa_wc_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 45;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 45;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 45;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template18: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template18(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template18()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("missa_kanslia");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("missa_kanslia_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 46;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 46;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 46;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template19: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template19(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template19()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("missa_ruokala");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("missa_ruokala_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 47;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 47;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 47;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template20: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template20(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template20()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("missa_ulkona");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("missa_ulkona_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 48;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 48;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 48;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template21: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template21(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template21()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("missa_kadulla");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("missa_kadulla_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 49;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 49;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 49;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template22: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template22(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template22()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("missa_kaytavalla");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("missa_kaytavalla_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 50;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 50;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 50;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template23: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template23(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template23()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("missa_toissa");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("missa_toissa_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 51;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 51;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 51;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template24: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template24(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template24()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("missa_muualla");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("missa_muualla_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 52;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 52;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 52;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template25: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template25(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template25()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self.Value = "Kuka tuo toinen henkilö oli?";
            __self.Color = float4(0f, 0f, 0f, 0.6666667f);
            __self.Alignment = Fuse.Elements.Alignment.Center;
            __self.Margin = float4(0f, 5f, 0f, 15f);
            __self.SourceLineNumber = 54;
            __self.SourceFileName = "OldEntrysPage.ux";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template26: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template26(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template26()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("kuka_toinen");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("kuka_toinen_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 55;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 55;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 55;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template27: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template27(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template27()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("kuka_vanhempihoitaja");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("kuka_vanhempihoitaja_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 56;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 56;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 56;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template28: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template28(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template28()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("kuka_opettaja");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("kuka_opettaja_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 57;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 57;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 57;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template29: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template29(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template29()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("kuka_koulukuraattori");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("kuka_koulukuraattori_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 58;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 58;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 58;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template30: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template30(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template30()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("kuka_jokumuu");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("kuka_jokumuu_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 59;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 59;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 59;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template31: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template31(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template31()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self.Value = "Mitä teit?";
            __self.Color = float4(0f, 0f, 0f, 0.6666667f);
            __self.Alignment = Fuse.Elements.Alignment.Center;
            __self.Margin = float4(0f, 5f, 0f, 15f);
            __self.SourceLineNumber = 61;
            __self.SourceFileName = "OldEntrysPage.ux";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template32: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template32(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template32()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mitateit_loin");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("mitateit_loin_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 62;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 62;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 62;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template33: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template33(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template33()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mitateit_juoksin");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("mitateit_juoksin_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 63;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 63;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 63;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template34: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template34(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template34()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mitateit_huusin");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("mitateit_huusin_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 64;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 64;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 64;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template35: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template35(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template35()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mitateit_itkin");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("mitateit_itkin_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 65;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 65;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 65;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template36: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template36(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template36()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mitateit_kavelinpois");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("mitateit_kavelinpois_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 66;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 66;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 66;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template37: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template37(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template37()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mitateit_rikoinjotain");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("mitateit_rikoinjotain_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 67;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 67;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 67;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template38: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template38(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template38()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mitateit_kerroinaiku");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("mitateit_kerroinaiku_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 68;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 68;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 68;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template39: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template39(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template39()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mitateit_kerroinkave");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("mitateit_kerroinkave_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 69;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 69;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 69;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template40: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template40(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template40()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mitateit_envalittanut");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("mitateit_envalittanut_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 70;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 70;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 70;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template41: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template41(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template41()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mitateit_hoidinasianpuhumalla");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("mitateit_hoidinasianpuhumalla_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 71;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 71;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 71;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template42: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template42(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template42()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mitateit_vihanhallinanmenetelma");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("mitateit_vihanhallinanmenetelma_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 72;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 72;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 72;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template43: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template43(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template43()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mitateit_sosiaalinentaito");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("mitateit_sosiaalinentaito_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 73;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 73;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 73;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template44: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template44(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template44()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("mitateit_jotainmuuta");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("mitateit_jotainmuuta_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.Margin = float4(0f, 5f, 0f, 15f);
            __self.SourceLineNumber = 74;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 74;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 74;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template45: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template45(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template45()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self.Value = "Kuinka vihainen olit?";
            __self.Color = float4(0f, 0f, 0f, 0.6666667f);
            __self.Alignment = Fuse.Elements.Alignment.Center;
            __self.Margin = float4(0f, 5f, 0f, 15f);
            __self.SourceLineNumber = 76;
            __self.SourceFileName = "OldEntrysPage.ux";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template46: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template46(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template46()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("viha_kihisinraivosta");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("viha_kihisinraivosta_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 77;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 77;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 77;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template47: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template47(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template47()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("viha_todellavihainen");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("viha_todellavihainen_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 78;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 78;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 78;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template48: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template48(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template48()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("viha_melkovihainen");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("viha_melkovihainen_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 79;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 79;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 79;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template49: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template49(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template49()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("viha_lievaviha");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("viha_lievaviha_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 80;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 80;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 80;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template50: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template50(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template50()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("viha_enlainkaan");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("viha_enlainkaan_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 81;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 81;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 81;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template51: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template51(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template51()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self.Value = "Kuinka hyvin hallitsit itsesi?";
            __self.Color = float4(0f, 0f, 0f, 0.6666667f);
            __self.Alignment = Fuse.Elements.Alignment.Center;
            __self.Margin = float4(0f, 5f, 0f, 15f);
            __self.SourceLineNumber = 83;
            __self.SourceFileName = "OldEntrysPage.ux";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template52: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template52(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template52()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("hallinta_1");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("hallinta_1_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 84;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 84;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 84;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template53: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template53(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template53()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("hallinta_2");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("hallinta_2_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 85;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 85;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 85;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template54: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template54(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template54()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("hallinta_3");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("hallinta_3_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 86;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 86;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 86;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template55: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template55(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template55()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("hallinta_4");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("hallinta_4_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 87;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 87;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 87;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template56: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template56(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        global::Uno.UX.Property<string> __self_RealLabel_inst;
        static Template56()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("hallinta_5");
            __self_RealLabel_inst = new Haslaamispaivakirja_ListItem_RealLabel_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("hallinta_5_label");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_RealLabel_inst, temp1, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 88;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 88;
            temp.SourceFileName = "OldEntrysPage.ux";
            temp1.SourceLineNumber = 88;
            temp1.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
        static global::Uno.UX.Selector __selector1 = "RealLabel";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template57: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template57(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template57()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            __self.Value = "---------";
            __self.Color = float4(0f, 0f, 0f, 0.6666667f);
            __self.Alignment = Fuse.Elements.Alignment.Center;
            __self.Margin = float4(0f, 5f, 0f, 15f);
            __self.SourceLineNumber = 90;
            __self.SourceFileName = "OldEntrysPage.ux";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template58: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly OldEntrysPage __parent;
        [Uno.WeakReference] internal readonly OldEntrysPage __parentInstance;
        public Template58(OldEntrysPage parent, OldEntrysPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_TheValue_inst;
        static Template58()
        {
        }
        public override object New()
        {
            var __self = new global::ListItem();
            __self_TheValue_inst = new Haslaamispaivakirja_ListItem_TheValue_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("lastModified");
            var temp1 = new global::Fuse.Reactive.DataBinding(__self_TheValue_inst, temp, Fuse.Reactive.BindingMode.Default);
            __self.RealLabel = "Viimeksi päivitetty";
            __self.SourceLineNumber = 91;
            __self.SourceFileName = "OldEntrysPage.ux";
            temp.SourceLineNumber = 91;
            temp.SourceFileName = "OldEntrysPage.ux";
            __self.Bindings.Add(temp1);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "TheValue";
    }
    global::Uno.UX.Property<string> temp_Title_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<object> temp2_Items_inst;
    global::Uno.UX.Property<object> temp3_Items_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static OldEntrysPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public OldEntrysPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::FlyingDock(router);
        temp_Title_inst = new Haslaamispaivakirja_FlyingDock_Title_Property(temp, __selector0);
        var temp4 = new global::Fuse.Navigation.PageExpression("Title");
        var temp1 = new global::Fuse.Controls.Text();
        temp1_Value_inst = new Haslaamispaivakirja_FuseControlsTextControl_Value_Property(temp1, __selector1);
        var temp5 = new global::Fuse.Reactive.Data("dataText");
        var temp2 = new global::Fuse.Reactive.Each();
        temp2_Items_inst = new Haslaamispaivakirja_FuseReactiveEach_Items_Property(temp2, __selector2);
        var temp6 = new global::Fuse.Reactive.Data("listoofoldentrys");
        var temp3 = new global::Fuse.Reactive.Each();
        temp3_Items_inst = new Haslaamispaivakirja_FuseReactiveEach_Items_Property(temp3, __selector2);
        var temp7 = new global::Fuse.Reactive.Data("listing");
        var temp8 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp9 = new global::Fuse.Controls.Image();
        var temp10 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp11 = new global::Fuse.Reactive.DataBinding(temp_Title_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp12 = new global::Fuse.Controls.ScrollView();
        var temp13 = new global::Fuse.Controls.StackPanel();
        var temp14 = new global::header.Text();
        var temp15 = new global::Fuse.Controls.Text();
        var temp16 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp17 = new global::Fuse.Controls.StackPanel();
        var temp18 = new global::Fuse.Controls.Grid();
        var temp19 = new Template(this, this);
        var temp20 = new global::Fuse.Reactive.DataBinding(temp2_Items_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var temp21 = new Template1(this, this);
        var temp22 = new Template2(this, this);
        var temp23 = new Template3(this, this);
        var temp24 = new Template4(this, this);
        var temp25 = new Template5(this, this);
        var temp26 = new Template6(this, this);
        var temp27 = new Template7(this, this);
        var temp28 = new Template8(this, this);
        var temp29 = new Template9(this, this);
        var temp30 = new Template10(this, this);
        var temp31 = new Template11(this, this);
        var temp32 = new Template12(this, this);
        var temp33 = new Template13(this, this);
        var temp34 = new Template14(this, this);
        var temp35 = new Template15(this, this);
        var temp36 = new Template16(this, this);
        var temp37 = new Template17(this, this);
        var temp38 = new Template18(this, this);
        var temp39 = new Template19(this, this);
        var temp40 = new Template20(this, this);
        var temp41 = new Template21(this, this);
        var temp42 = new Template22(this, this);
        var temp43 = new Template23(this, this);
        var temp44 = new Template24(this, this);
        var temp45 = new Template25(this, this);
        var temp46 = new Template26(this, this);
        var temp47 = new Template27(this, this);
        var temp48 = new Template28(this, this);
        var temp49 = new Template29(this, this);
        var temp50 = new Template30(this, this);
        var temp51 = new Template31(this, this);
        var temp52 = new Template32(this, this);
        var temp53 = new Template33(this, this);
        var temp54 = new Template34(this, this);
        var temp55 = new Template35(this, this);
        var temp56 = new Template36(this, this);
        var temp57 = new Template37(this, this);
        var temp58 = new Template38(this, this);
        var temp59 = new Template39(this, this);
        var temp60 = new Template40(this, this);
        var temp61 = new Template41(this, this);
        var temp62 = new Template42(this, this);
        var temp63 = new Template43(this, this);
        var temp64 = new Template44(this, this);
        var temp65 = new Template45(this, this);
        var temp66 = new Template46(this, this);
        var temp67 = new Template47(this, this);
        var temp68 = new Template48(this, this);
        var temp69 = new Template49(this, this);
        var temp70 = new Template50(this, this);
        var temp71 = new Template51(this, this);
        var temp72 = new Template52(this, this);
        var temp73 = new Template53(this, this);
        var temp74 = new Template54(this, this);
        var temp75 = new Template55(this, this);
        var temp76 = new Template56(this, this);
        var temp77 = new Template57(this, this);
        var temp78 = new Template58(this, this);
        var temp79 = new global::Fuse.Reactive.DataBinding(temp3_Items_inst, temp7, Fuse.Reactive.BindingMode.Default);
        var temp80 = new global::Fuse.Drawing.StaticSolidColor(float4(0.5490196f, 0.5372549f, 0.6901961f, 0.6980392f));
        this.SourceLineNumber = 1;
        this.SourceFileName = "OldEntrysPage.ux";
        temp8.LineNumber = 3;
        temp8.FileName = "OldEntrysPage.ux";
        temp8.SourceLineNumber = 3;
        temp8.SourceFileName = "OldEntrysPage.ux";
        temp8.File = new global::Uno.UX.BundleFileSource(import("../../../../../OldEntrysPage.js"));
        temp9.StretchMode = Fuse.Elements.StretchMode.PixelPrecise;
        temp9.Layer = Fuse.Layer.Background;
        temp9.SourceLineNumber = 5;
        temp9.SourceFileName = "OldEntrysPage.ux";
        temp9.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/vuoristomaisema.jpg"));
        temp9.Background = temp10;
        temp.SourceLineNumber = 7;
        temp.SourceFileName = "OldEntrysPage.ux";
        temp.Bindings.Add(temp11);
        temp4.SourceLineNumber = 7;
        temp4.SourceFileName = "OldEntrysPage.ux";
        temp12.Padding = float4(0f, 0f, 0f, 60f);
        temp12.SourceLineNumber = 9;
        temp12.SourceFileName = "OldEntrysPage.ux";
        temp12.Background = temp80;
        temp12.Children.Add(temp13);
        temp13.Margin = float4(0f, 60f, 0f, 0f);
        temp13.SourceLineNumber = 11;
        temp13.SourceFileName = "OldEntrysPage.ux";
        temp13.Children.Add(temp14);
        temp13.Children.Add(temp15);
        temp13.Children.Add(temp1);
        temp13.Children.Add(temp17);
        temp13.Children.Add(temp3);
        temp14.Value = "Kirjaukset";
        temp14.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp14.Margin = float4(15f, 0f, 15f, 0f);
        temp14.SourceLineNumber = 13;
        temp14.SourceFileName = "OldEntrysPage.ux";
        temp15.Value = "Valitse joku vanhoista päiväkirjoista";
        temp15.Margin = float4(15f, 0f, 15f, 30f);
        temp15.SourceLineNumber = 14;
        temp15.SourceFileName = "OldEntrysPage.ux";
        temp1.Margin = float4(15f, 0f, 15f, 0f);
        temp1.SourceLineNumber = 16;
        temp1.SourceFileName = "OldEntrysPage.ux";
        temp1.Bindings.Add(temp16);
        temp5.SourceLineNumber = 16;
        temp5.SourceFileName = "OldEntrysPage.ux";
        temp17.SourceLineNumber = 17;
        temp17.SourceFileName = "OldEntrysPage.ux";
        temp17.Children.Add(temp18);
        temp18.ColumnCount = 2;
        temp18.SourceLineNumber = 18;
        temp18.SourceFileName = "OldEntrysPage.ux";
        temp18.Children.Add(temp2);
        temp2.SourceLineNumber = 19;
        temp2.SourceFileName = "OldEntrysPage.ux";
        temp2.Templates.Add(temp19);
        temp2.Bindings.Add(temp20);
        temp6.SourceLineNumber = 19;
        temp6.SourceFileName = "OldEntrysPage.ux";
        temp3.SourceLineNumber = 25;
        temp3.SourceFileName = "OldEntrysPage.ux";
        temp3.Templates.Add(temp21);
        temp3.Templates.Add(temp22);
        temp3.Templates.Add(temp23);
        temp3.Templates.Add(temp24);
        temp3.Templates.Add(temp25);
        temp3.Templates.Add(temp26);
        temp3.Templates.Add(temp27);
        temp3.Templates.Add(temp28);
        temp3.Templates.Add(temp29);
        temp3.Templates.Add(temp30);
        temp3.Templates.Add(temp31);
        temp3.Templates.Add(temp32);
        temp3.Templates.Add(temp33);
        temp3.Templates.Add(temp34);
        temp3.Templates.Add(temp35);
        temp3.Templates.Add(temp36);
        temp3.Templates.Add(temp37);
        temp3.Templates.Add(temp38);
        temp3.Templates.Add(temp39);
        temp3.Templates.Add(temp40);
        temp3.Templates.Add(temp41);
        temp3.Templates.Add(temp42);
        temp3.Templates.Add(temp43);
        temp3.Templates.Add(temp44);
        temp3.Templates.Add(temp45);
        temp3.Templates.Add(temp46);
        temp3.Templates.Add(temp47);
        temp3.Templates.Add(temp48);
        temp3.Templates.Add(temp49);
        temp3.Templates.Add(temp50);
        temp3.Templates.Add(temp51);
        temp3.Templates.Add(temp52);
        temp3.Templates.Add(temp53);
        temp3.Templates.Add(temp54);
        temp3.Templates.Add(temp55);
        temp3.Templates.Add(temp56);
        temp3.Templates.Add(temp57);
        temp3.Templates.Add(temp58);
        temp3.Templates.Add(temp59);
        temp3.Templates.Add(temp60);
        temp3.Templates.Add(temp61);
        temp3.Templates.Add(temp62);
        temp3.Templates.Add(temp63);
        temp3.Templates.Add(temp64);
        temp3.Templates.Add(temp65);
        temp3.Templates.Add(temp66);
        temp3.Templates.Add(temp67);
        temp3.Templates.Add(temp68);
        temp3.Templates.Add(temp69);
        temp3.Templates.Add(temp70);
        temp3.Templates.Add(temp71);
        temp3.Templates.Add(temp72);
        temp3.Templates.Add(temp73);
        temp3.Templates.Add(temp74);
        temp3.Templates.Add(temp75);
        temp3.Templates.Add(temp76);
        temp3.Templates.Add(temp77);
        temp3.Templates.Add(temp78);
        temp3.Bindings.Add(temp79);
        temp7.SourceLineNumber = 25;
        temp7.SourceFileName = "OldEntrysPage.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp8);
        this.Children.Add(temp9);
        this.Children.Add(temp);
        this.Children.Add(temp12);
    }
    static global::Uno.UX.Selector __selector0 = "Title";
    static global::Uno.UX.Selector __selector1 = "Value";
    static global::Uno.UX.Selector __selector2 = "Items";
}
