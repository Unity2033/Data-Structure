using UnityEngine;
using UnityEngine.Localization;
using UnityEngine.Localization.Settings;

public class Count : MonoBehaviour
{
	public int count;

	public void UserLocalization()
	{
		count++;

		LocalizationSettings.SelectedLocale =
			LocalizationSettings.AvailableLocales.Locales[count];
	}
}
